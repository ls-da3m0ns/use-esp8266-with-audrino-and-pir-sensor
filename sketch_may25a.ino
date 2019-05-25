#include<SoftwareSerial.h>
String string = "GET /update?key=5FRXCDUEYUPUR0&field1=";// your thingspeak key
int pin=2;


SoftwareSerial ESP8266(0,1);
void setup() {"GET /update?key=5FRXCDUEYUPUR0&field1=";
  pinMode(pin,INPUT);
}

void loop() {


  ESP8266.begin(112500);
  Serial.print("AT");
  //delay(1100);
  //ESP8266.print("AT\r\n");
  delay(5000);
 ESP8266.print("AT+CWJAP=\"admin\",\"theadmin01\"\r\n");
   delay(4000);
 ESP8266.print("AT+CIPMUX=1\r\n");
    delay(1000);
  ESP8266.print("AT+CIPSERVER=1,80\r\n");
    delay(2000);
   ESP8266.print("AT+CIPSTART=4,\"TCP\",\"184.106.153.149\",80\r\n");
     delay(2000);
    ESP8266.print("AT+CIPSEND=4,43\r\n");
      delay(2000);
      if(digitalRead(pin)==HIGH)
{string+=1;}
else
{string+=0; }
    ESP8266.print(string);
    delay(100);
    ESP8266.print("\n");
    string= "GET /update?key=5FRXCDUEYUPUR0&field1="; 
   
      

}
