#include <LiquidCrystal.h>
LiquidCrystal lcd(8,7,6,5,4,2);
int sutun=8,satir=0;
int pir=3;
void setup() {
lcd.begin(16,2);
Serial.begin(9600);
}

void loop() {
int pirdeger=digitalRead(pir);
if(pirdeger==HIGH)
{
 lcd.clear();
  lcd.setCursor(sutun,satir);
    sutun++;
  lcd.print("*");
   delay(150);
}
if(pirdeger==LOW)
{
   lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("emine");
  delay(150);
}
}
