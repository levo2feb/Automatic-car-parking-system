#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "YourBlynkAuthToken"; // Replace with Blynk Auth Token
char ssid[] = "YourWiFiSSID";       // Replace with your Wi-Fi name
char pass[] = "YourWiFiPassword";   // Replace with your Wi-Fi password

int sensor1 = D1;
int sensor2 = D2;
int sensor3 = D3;
int sensor4 = D4;
int sensor5 = D5;

void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);

  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(sensor4, INPUT);
  pinMode(sensor5, INPUT);
}

void loop() {
  Blynk.run();

  int s1 = digitalRead(sensor1);
  int s2 = digitalRead(sensor2);
  int s3 = digitalRead(sensor3);
  int s4 = digitalRead(sensor4);
  int s5 = digitalRead(sensor5);

  Blynk.virtualWrite(V1, s1); // Slot 1
  Blynk.virtualWrite(V2, s2); // Slot 2
  Blynk.virtualWrite(V3, s3); // Slot 3
  Blynk.virtualWrite(V4, s4); // Slot 4
  Blynk.virtualWrite(V5, s5); // Slot 5

  int available = s1 + s2 + s3 + s4 + s5; // 1 = available
  Blynk.virtualWrite(V0, available); // Total Available
  delay(1000);
}
