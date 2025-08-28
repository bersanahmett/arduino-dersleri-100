/* Code from theoryCIRCUIT.com */
#include <WiFi.h>

// Wi-Fi credentials
const char* ssid = "YOUR_WIFI_SSID";
const char* password = "YOUR_WIFI_PASSWORD";

// Web server on port 80
WiFiServer server(80);

// LDR pin
const int ldrPin = 32;

void setup() {
  Serial.begin(115200);

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConnected to Wi-Fi");
  Serial.println(WiFi.localIP());

  // Start the server
  server.begin();
}

void loop() {
  WiFiClient client = server.available(); // Check for incoming clients
  if (client) {
    String request = client.readStringUntil('\r');
    client.flush();

    // Read LDR value
    int analogValue = analogRead(ldrPin);
    float voltage = analogValue * (3.3 / 4095.0);
    float lightIntensity = (analogValue / 4095.0) * 100; // Simple percentage mapping

    // Handle AJAX request
    if (request.indexOf("/data") != -1) {
      String json = "{\"analog\":" + String(analogValue) + ",";
      json += "\"voltage\":" + String(voltage, 2) + ",";
      json += "\"light\":" + String(lightIntensity, 2) + "}";
      client.println("HTTP/1.1 200 OK");
      client.println("Content-Type: application/json");
      client.println("Connection: close");
      client.println();
      client.println(json);
    } else {
      // Serve the HTML page
      client.println("HTTP/1.1 200 OK");
      client.println("Content-Type: text/html");
      client.println("Connection: close");
      client.println();
      client.println("<!DOCTYPE HTML>");
      client.println("<html>");
      client.println("<head><title>ESP32 LDR Monitor</title>");
      client.println("<style>");
      client.println("body { font-family: Arial, sans-serif; text-align: center; }");
      client.println("meter { width: 50%; height: 20px; }");
      client.println("</style>");
      client.println("</head>");
      client.println("<body>");
      client.println("<h1>LDR Sensor Data</h1>");
      client.println("<p>Analog Value: <span id='analog'>0</span></p>");
      client.println("<p>Voltage: <span id='voltage'>0</span> V</p>");
      client.println("<p>Light Intensity: <span id='light'>0</span> %</p>");
      client.println("<meter id='lightMeter' min='0' max='100' value='0'></meter>");
      client.println("<script>");
      client.println("function updateData() {");
      client.println("  fetch('/data')");
      client.println("    .then(response => response.json())");
      client.println("    .then(data => {");
      client.println("      document.getElementById('analog').innerText = data.analog;");
      client.println("      document.getElementById('voltage').innerText = data.voltage;");
      client.println("      document.getElementById('light').innerText = data.light;");
      client.println("      document.getElementById('lightMeter').value = data.light;");
      client.println("    });");
      client.println("}");
      client.println("setInterval(updateData, 1000);"); // Update every 1 second
      client.println("updateData();"); // Initial call
      client.println("</script>");
      client.println("</body></html>");
    }
    delay(1);
    client.stop(); // Close the connection
  }
}
