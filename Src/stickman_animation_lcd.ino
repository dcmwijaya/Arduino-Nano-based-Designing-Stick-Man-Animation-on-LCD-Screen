#include <LiquidCrystal_I2C.h> // calling LCD I2C library
LiquidCrystal_I2C lcd(0x27, 16, 2); // set I2C address and LCD size

// stickman pose-1 pixels
// bagian tangan
byte Rstickman1[8] = { 
  B00000,
  B00000,
  B00000,
  B00000,
  B01000,
  B00111,
  B10001,
  B01111
};
// bagian kepala dan badan
byte Rstickman2[8] = { 
  B00000,
  B11111,
  B01101,
  B01111,
  B00111,
  B11100,
  B11100,
  B11100
};
// bagian kaki
byte Rstickman3[8] = { 
  B00000,
  B00000,
  B00001,
  B00001,
  B00011,
  B11111,
  B00000,
  B00000 
};
byte Rstickman4[8] = { 
  B11100,
  B11100,
  B11110,
  B11111,
  B11011,
  B10011,
  B00001,
  B00001
};
byte Rstickman5[8] = { 
  B00000,
  B00000,
  B00001,
  B00001,
  B00011,
  B00111,
  B00110,
  B00100 
};
byte Rstickman6[8] = { 
  B11100,
  B11100,
  B11100,
  B11100,
  B10110,
  B00110,
  B00110,
  B00110
};

// stickman pose-2 pixels
// bagian tangan
byte Lstickman1[8] = { 
  B00000,
  B00000,
  B00000,
  B00000,
  B00010,
  B11100,
  B10001,
  B11110
};
// bagian kepala dan badan
byte Lstickman2[8] = { 
  B00000,
  B11111,
  B10110,
  B11110,
  B11100,
  B00111,
  B00111,
  B00111
};
// bagian kaki
byte Lstickman3[8] = { 
  B00000,
  B00000,
  B10000,
  B10000,
  B11000,
  B11111,
  B00000,
  B00000 
};
byte Lstickman4[8] = { 
  B00111,
  B00111,
  B01111,
  B11111,
  B11011,
  B11001,
  B10000,
  B10000
};
byte Lstickman5[8] = { 
  B00000,
  B00000,
  B10000,
  B10000,
  B11000,
  B11100,
  B01100,
  B00100 
};
byte Lstickman6[8] = { 
  B00111,
  B00111,
  B00111,
  B00111,
  B01101,
  B01100,
  B01100,
  B01100
};

// setup method
void setup() {
  Serial.begin(9600); // initiate serial communication at baudrate 9600
  startingLCD(); // calls the startingLCD method
}

// loop method
void loop(){
  stickman_right();
  stickman_left();
}

// method for starting the LCD
void startingLCD(){
  lcd.init(); // I2C LCD Initiation
  lcd.backlight(); // turn on the LCD backlight
//  lcd.setCursor(4,0); // set the cursor on row 1, column 4
//  lcd.print("Stick Man"); // print text -> Stick Man
//  lcd.setCursor(4,1); // set the cursor on row 2, column 4
//  lcd.print("Animation"); // print text -> Animation
//  delay(10000); // delay time -> 10 second
}

void stickman_right(){
  lcd.createChar(1,Rstickman1);
  lcd.createChar(2,Rstickman2);
  lcd.createChar(3,Rstickman3);
  lcd.createChar(4,Rstickman4);
  lcd.createChar(5,Rstickman5);
  lcd.createChar(6,Rstickman6);
  for (int count = 0; count < 16; count ++){
    lcd.clear();
    if(count >= 3){
      lcd.setCursor(count-3,0);
      lcd.write(1);
    }
    if(count >= 2){
      lcd.setCursor(count-2,0);
      lcd.write(2);
    }
    if((count % 2) == 0) { // if the count is even:
      if(count >= 3){
        lcd.setCursor(count-3,1);
        lcd.write(3);
      }
      if(count >= 2){
        lcd.setCursor(count-2,1);
        lcd.write(4);
      }
      delay(400);
    }
    else {
      if(count >= 3){
        lcd.setCursor(count-3,1);
        lcd.write(5);
      }
      if(count >= 2){
        lcd.setCursor(count-2,1);
        lcd.write(6);
      }
      delay(400);
    }
  }
}

void stickman_left(){
  lcd.createChar(7,Lstickman1);
  lcd.createChar(8,Lstickman2);
  lcd.createChar(9,Lstickman3);
  lcd.createChar(10,Lstickman4);
  lcd.createChar(11,Lstickman5);
  lcd.createChar(12,Lstickman6);
  for (int count = 16; count >= 0; count --){
    lcd.clear();
    if(count <= 16){
      lcd.setCursor(count+3,0);
      lcd.write(7);
    }
    if(count <= 15){
      lcd.setCursor(count+2,0);
      lcd.write(8);
    }
    if((count % 2) == 0) { // if the count is even:
      if(count <= 16){
        lcd.setCursor(count+3,1);
        lcd.write(9);
      }
      if(count <= 15){
        lcd.setCursor(count+2,1);
        lcd.write(10);
      }
      delay(400);
    }
    else {
      if(count <= 16){
        lcd.setCursor(count+3,1);
        lcd.write(11);
      }
      if(count <= 15){
        lcd.setCursor(count+2,1);
        lcd.write(12);
      }
      delay(400);
    }
  }
}
