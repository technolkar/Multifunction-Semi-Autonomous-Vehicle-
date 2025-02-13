#define BLYNK_TEMPLATE_ID "TMPLlKf684b_"
#define BLYNK_TEMPLATE_NAME "car iot based"
#include <Blynk.h>
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "xHFxPX9Z0HhtSe5eCmlIqi7T3iClFr_W";
char ssid[] = "ROBOT";
char pass[] = "ROBOT123";

int relay1 = 14; 
int relay2 = 12;
int relay3 = 13; 
int relay4 = 15;

void setup() 
{
 pinMode(relay1, OUTPUT);
 pinMode(relay2, OUTPUT);
 pinMode(relay3, OUTPUT);
 pinMode(relay4, OUTPUT);

 digitalWrite(relay1, HIGH);
 digitalWrite(relay2, HIGH);
 digitalWrite(relay3, HIGH);
 digitalWrite(relay4, HIGH); 

 Serial.begin(9600);
 Blynk.begin(auth, ssid, pass);

}

void loop() 
{
 Blynk.run();
}

BLYNK_WRITE(V0)
{
  int forward = param.asInt();
  if (forward == 1)
    {
      Serial.println("Moving FORWARD");
      digitalWrite(relay1,LOW);
      digitalWrite(relay3,LOW);
    }
  else
    {
      Serial.println("Stop");
      digitalWrite(relay1,HIGH);
      digitalWrite(relay3,HIGH);
    }
}

BLYNK_WRITE(V1)
{
  int back = param.asInt();
  if (back == 1)
    {
      Serial.println("Moving BACK");
      digitalWrite(relay2,LOW);
      digitalWrite(relay4,LOW);
    }
  else
    {
      Serial.println("Stop");
      digitalWrite(relay2,HIGH);
      digitalWrite(relay4,HIGH);
    }
}

BLYNK_WRITE(V2)
{
  int right = param.asInt();
  if (right == 1)
    {
      Serial.println("Moving RIGHT");
      digitalWrite(relay1,LOW);
      digitalWrite(relay4,LOW);
    }
  else
    {
      Serial.println("Stop");
      digitalWrite(relay1,HIGH);
      digitalWrite(relay4,HIGH);
    }
}

BLYNK_WRITE(V3)
{
  int left = param.asInt();
  if (left == 1)
    {
      Serial.println("Moving LEFT");
      digitalWrite(relay2,LOW);
      digitalWrite(relay3,LOW);
    }
  else
    {
      Serial.println("Stop");
      digitalWrite(relay2,HIGH);
      digitalWrite(relay3,HIGH);
    }
}
