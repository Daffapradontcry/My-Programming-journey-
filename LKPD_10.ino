PK    WweY               wokwi-project.txtDownloaded from https://wokwi.com/projects/413699396611978241

Simulate this project on https://wokwi.com
PK<8Y�m   m   PK    XweY            
   sketch.ino//Dafa pratama
//XI TAV 2
const int buttonPin = 26;
void setup() {
  pinMode(buttonPpin, INPUT);
  Serial.begin(9600);
}
void loop() {
  int(buttonState = digitalRead(buttonPin);
  Serial.print("Tombol ditekan: ");
  if (buttonState == HIGH) {
    Serial.println("YA";
  } else {
    Serial.println("TIDAK");
  delay(100)
}
}PK��֏E  E  PK    XweY               diagram.json{
  "version": 1,
  "author": "Dark Smileツ",
  "editor": "wokwi",
  "parts": [ { "type": "board-esp32-devkit-c-v4", "id": "esp", "top": 0, "left": 0, "attrs": {} } ],
  "connections": [ [ "esp:TX", "$serialMonitor:RX", "", [] ], [ "esp:RX", "$serialMonitor:TX", "", [] ] ],
  "dependencies": {}
}PK���*  *  PK    WweY<8Y�m   m              ��    wokwi-project.txtPK    XweY��֏E  E  
           ���   sketch.inoPK    XweY���*  *             ��)  diagram.jsonPK      �   �    