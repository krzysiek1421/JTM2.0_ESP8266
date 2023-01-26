#include <ESP8266WiFi.h>

const char* host = "ip";

WiFiClient client;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.begin("ussid", "pswd");
  Serial.print("Connecting");
  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }

  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // put your main code here, to run repeatedly:
if(client.connect(host, 2137));
{
  Serial.print("Connected to:");
  Serial.print("host");
}

}
