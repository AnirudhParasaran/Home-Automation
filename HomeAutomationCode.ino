
#define BLYNK_PRINT Serial
//#define BLYNK_TEMPLATE_ID      "TMPL3yf5TxJQ0"
//#define BLYNK_TEMPLATE_NAME    "LIGHT AUTOMATION SYSTEM"
//#define BLYNK_AUTH_TOKEN       "9XWDc7Ffn_sSTWIxwb3H73T-QYLA0BB8"
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


#define relay1 D0
#define relay2 D1
#define relay3 D2
#define relay4 D3

#define BLYNK_TEMPLATE_ID "TMPL3yf5TxJQ0"
#define BLYNK_TEMPLATE_NAME "LIGHT AUTOMATION SYSTEM"
#define BLYNK_AUTH_TOKEN "9XWDc7Ffn_sSTWIxwb3H73T-QYLA0BB8"

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "";//Enter your WIFI name
char pass[] = "";//Enter your WIFI password

BLYNK_WRITE(V0) {
  bool value1 = param.asInt();
  if (value1 == 1) {
    digitalWrite(relay1, LOW);
  } else {
    digitalWrite(relay1, HIGH);
  }
}


BLYNK_WRITE(V1) {
  bool value2 = param.asInt();
  if (value2 == 1) {
    digitalWrite(relay2, LOW);
  } else {
    digitalWrite(relay2, HIGH);
  }
}

//Get the button values
BLYNK_WRITE(V2) {
  bool value3 = param.asInt();
  if (value3 == 1) {
    digitalWrite(relay3, LOW);
  } else {
    digitalWrite(relay3, HIGH);
  }
}

BLYNK_WRITE(V3) {
  bool value4 = param.asInt();
  if (value4 == 1) {
    digitalWrite(relay4, LOW);
  } else {
    digitalWrite(relay4, HIGH);
  }
}

void setup() {
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);

  
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);

  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  Blynk.run();
}
