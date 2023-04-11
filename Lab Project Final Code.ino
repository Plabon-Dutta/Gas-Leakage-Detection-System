#include <LiquidCrystal_I2C.h>       
#include <SoftwareSerial.h>

LiquidCrystal_I2C lcd(0x27,16,2);

int rxPin = 5;
int txPin = 6;

SoftwareSerial mySerial(rxPin, txPin);

int buzzer = 13;
int GASA0 = A0;
int gasvalue;

void setup() {
  mySerial.begin(9600);
  Serial.begin(9600);

  pinMode(buzzer, OUTPUT);
  pinMode(GASA0, INPUT);
 
  lcd.init();                       // initialize the lcd
  lcd.backlight(); 
  lcd.setCursor(1, 0);
  lcd.print("welcome to Gas"); 
  lcd.setCursor(0, 1);
  lcd.print("Leakage Detector"); 
  delay(2000);     
}

void loop() {
  int analogSensor = analogRead(GASA0);
  int gasvalue = (analogSensor / 10) - 20; 
  Serial.println(gasvalue);
  
  lcd.setCursor(0, 0);
  lcd.print("GAS Level:");
  lcd.setCursor(10, 0);
  lcd.print(max(0, gasvalue));
  lcd.setCursor(12, 0);
  lcd.print("%");
  
  if (gasvalue >= 30) {
    tone(buzzer, 500, 4000);
    SendTextMessage();
    lcd.setCursor(0, 1);
    lcd.print("DANGER");
    
    analogSensor = analogRead(GASA0);
    gasvalue =(analogSensor / 10) - 20;
    
    while (gasvalue >= 30) {
      analogSensor = analogRead(GASA0);
      gasvalue = (analogSensor / 10) - 20;
      Serial.println(gasvalue);
      
      lcd.setCursor(0, 0);
      lcd.print("GAS Level:");
      lcd.setCursor(10, 0);
      lcd.print(max(0, gasvalue));
      lcd.setCursor(12, 0);
      lcd.print("%");
      
      if (gasvalue >= 30) tone(buzzer, 500, 200);
      
      delay(200);
      noTone(buzzer);
    }
    noTone(buzzer);
  }
  lcd.setCursor(0, 1);
  lcd.print("NORMAL");
  delay(500);
  lcd.clear();
}

void SendTextMessage()
{
  mySerial.println("AT+CMGF=1");    //To send SMS in Text Mode
  delay(1000);
  mySerial.println("AT+CMGS=\"+8801851316950\"\r");  
  delay(1000);
  mySerial.println("Alert! Gas Leaking!");//the content of the message
  Serial.println("Alert! Gas Leaking!"); // Just for checking
  delay(200);
  Serial.println("SMS SendingDone");
  mySerial.println((char)26);
  return;
}
