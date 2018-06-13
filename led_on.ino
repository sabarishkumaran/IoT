#iot
#led_on_using_iot
#using_cayenne_platform
#define_CAYENNE_PRINT_Serial
#include <CayenneMQTTESP8266.h>
// WiFi network info.
char ssid[] ="your ssid(hotspot username)";
char wifiPassword[] ="your hotspot password"; 
//replace the authentication info with your cayenne details
//sign up in cayenne and get the authentication details
// Cayenne authentication info. This should be obtained from the Cayenne Dashboard.
char username[] = "02f42b90-5e6e-11e8-a25e-d5e347246797"; 
char password[] = "5e78980ad697b7031d0bb0e8c842677281ac338a";
char clientID[] = "4a6c26b0-5e70-11e8-b3a0-856fee219c98";


void setup() {
  pinMode(D6,OUTPUT);
  Cayenne.begin(username, password, clientID, ssid, wifiPassword);
}

void loop() 
{
  Cayenne.loop();
  
  }


CAYENNE_IN(2)
{
  digitalWrite(D6,getValue.asInt());
}
