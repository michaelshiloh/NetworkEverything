/*
  WiFi UDP Send and Receive String
  by dlf (Metodo2 srl)

  and strandTest by Adafruit

*/


//#include <SPI.h> not needed i don't think no more
#include <WiFi101.h>
#include <WiFiUdp.h>

int status = WL_IDLE_STATUS;
#include "arduino_secrets.h"
///////please enter your sensitive data in the Secret tab/arduino_secrets.h
char ssid[] = SECRET_SSID;        // your network SSID (name)
char pass[] = SECRET_PASS;    // your network password (use for WPA, or use as key for WEP)
int keyIndex = 0;            // your network key Index number (needed only for WEP)

unsigned int localPort = 2390;      // local port to listen on

char packetBuffer[255]; //buffer to hold incoming packet
char  ReplyBuffer[] = "acknowledged";       // a string to send back

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

#define PIN 11

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);

WiFiUDP Udp;

struct neoPixelBrightness {
  byte r;
  byte g;
  byte b;
};

const int NUM_OF_PIXELS = 12;

neoPixelBrightness pixels[NUM_OF_PIXELS];

void setup() {
  //Initialize serial and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  // check for the presence of the shield:
  if (WiFi.status() == WL_NO_SHIELD) {
    Serial.println("WiFi shield not present");
    // don't continue:
    while (true);
  }

  // attempt to connect to WiFi network:
  while ( status != WL_CONNECTED) {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    // Connect to WPA/WPA2 network. Change this line if using open or WEP network:
    status = WiFi.begin(ssid, pass);

    // wait 10 seconds for connection:
    delay(10000);
  }
  Serial.println("Connected to wifi");
  printWiFiStatus();

  Serial.println("\nStarting connection to server...");
  // if you get a connection, report back via serial:
  Udp.begin(localPort);

  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {

  // if there's data available, read a packet
  int packetSize = Udp.parsePacket();
  if (packetSize)
  {
    Serial.print("Received packet of size ");
    Serial.println(packetSize);
    Serial.print("From ");
    IPAddress remoteIp = Udp.remoteIP();
    Serial.print(remoteIp);
    Serial.print(", port ");
    Serial.println(Udp.remotePort());

    // read the packet into packetBufffer
    int len = Udp.read(packetBuffer, 255);
    if (len > 0) packetBuffer[len] = 0;
    Serial.println("Contents:");
    Serial.println(packetBuffer);

    printNeoPixelBuffer();
    // Assuming it's a bunch of neoPixel data display it
    strip.show();

    // send a reply, to the IP address and port that sent us the packet we received
    Udp.beginPacket(Udp.remoteIP(), Udp.remotePort());
    Udp.write(ReplyBuffer);
    Udp.endPacket();
  }

  delay(1000);
}

void printNeoPixelBuffer() {


  // we have pixels 0 through 11. Each pixel consists of 3 bytes
  for (int i = 0; i < NUM_OF_PIXELS * sizeof(neoPixelBrightness); i += sizeof(neoPixelBrightness) ) {

    Serial.print("\tPixel number:\t");
    Serial.print(i);

    Serial.print("\tRed:\t");
    byte redByte = (byte)(packetBuffer[i + 0]);

    Serial.print((byte) redByte);

    Serial.print("\tGreen:\t");
    byte greenByte = (byte)(packetBuffer[i + 1]);
    Serial.print((byte) greenByte);

    Serial.print("\tBlue:\t");
    byte blueByte = (byte)(packetBuffer[i + 2]);
    Serial.println((byte) blueByte);

    //for (int i = 0; i < NUM_OF_PIXELS; i ++) {

    strip.setPixelColor(i, strip.Color(redByte, greenByte, blueByte));
    Serial.print("setting pixel:\t");
    Serial.print(i);
    Serial.print("\tvalue \t");
    Serial.print(redByte);
    Serial.print(" \t");
    Serial.print(greenByte);
    Serial.print("\t \t");
    Serial.print(blueByte);

  }

}

  void printWiFiStatus() {
    // print the SSID of the network you're attached to:
    Serial.print("SSID: ");
    Serial.println(WiFi.SSID());

    // print your WiFi shield's IP address:
    IPAddress ip = WiFi.localIP();
    Serial.print("IP Address: ");
    Serial.println(ip);

    // print the received signal strength:
    long rssi = WiFi.RSSI();
    Serial.print("signal strength (RSSI):");
    Serial.print(rssi);
    Serial.println(" dBm");
  }




