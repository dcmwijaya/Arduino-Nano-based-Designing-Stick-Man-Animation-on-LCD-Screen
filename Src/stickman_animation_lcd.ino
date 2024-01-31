#include <LiquidCrystal_I2C.h> // calling LCD I2C library
LiquidCrystal_I2C lcd(0x27, 16, 2); // set I2C address and LCD size

// pixels for stickman -> pose 1
// 1 byte for each row of 5 x 8 led matrix
// the prefix "B" is the Arduino specific binary formatter
// A 0 means pixel off and A 1 means pixel on
byte Rstickman1[8] = { B00000, B00000, B00000, B00000, B01000, B00111, B10001, B01111 }; // bits related to hand design
byte Rstickman2[8] = { B00000, B11111, B01101, B01111, B00111, B11100, B11100, B11100 }; // bits related to head and body design
byte Rstickman3[8] = { B00000, B00000, B00001, B00001, B00011, B11111, B00000, B00000 }; byte Rstickman4[8] = { B11100, B11100, B11110, B11111, B11011, B10011, B00001, B00001 }; // bits related to foot-1 design
byte Rstickman5[8] = { B00000, B00000, B00001, B00001, B00011, B00111, B00110, B00100 }; byte Rstickman6[8] = { B11100, B11100, B11100, B11100, B10110, B00110, B00110, B00110 }; // bits related to foot-2 design

// pixels for stickman -> pose 2
// 1 byte for each row of 5 x 8 led matrix
// the prefix "B" is the Arduino specific binary formatter
// A 0 means pixel off and A 1 means pixel on
byte Lstickman1[8] = { B00000, B00000, B00000, B00000, B00010, B11100, B10001, B11110 }; // bits related to hand design
byte Lstickman2[8] = { B00000, B11111, B10110, B11110, B11100, B00111, B00111, B00111 }; // bits related to head and body design
byte Lstickman3[8] = { B00000, B00000, B10000, B10000, B11000, B11111, B00000, B00000 }; byte Lstickman4[8] = { B00111, B00111, B01111, B11111, B11011, B11001, B10000, B10000 }; // bits related to foot-1 design
byte Lstickman5[8] = { B00000, B00000, B10000, B10000, B11000, B11100, B01100, B00100 }; byte Lstickman6[8] = { B00111, B00111, B00111, B00111, B01101, B01100, B01100, B01100 }; // bits related to foot-2 design

// setup method
void setup() {
  Serial.begin(9600); // initiate serial communication at baudrate 9600
  lcd.init(); // I2C LCD Initiation
  lcd.backlight(); // turn on the LCD backlight
}

// loop method
void loop(){
  stickman_right(); // calls the stickman_right method
  stickman_left(); // calls the stickman_left method
}

// stick man moves towards the right
void stickman_right(){
  // custom character initialization -> Lstickman
  lcd.createChar(1,Rstickman1); lcd.createChar(2,Rstickman2); lcd.createChar(3,Rstickman3); lcd.createChar(4,Rstickman4); lcd.createChar(5,Rstickman5); lcd.createChar(6,Rstickman6);

  // count forward from 0 to 20
  for (int count = 0; count <= 20; count ++){
    lcd.clear(); // erase text on the LCD screen
    if(count >= 5){ // If the count position is already in the 5th column, then:
      lcd.setCursor(count-5,0); // set the cursor on row 1
      lcd.write(1); // display special characters -> Rstickman1
    }
    if(count >= 4){ // If the count position is already in the 4th column, then:
      lcd.setCursor(count-4,0); // set the cursor on row 1
      lcd.write(2); // display special characters -> Rstickman2
    }
    if(count >= 2){ // If the count position is already in the 2nd column, then:
      lcd.setCursor(count-2,0); // set the cursor on row 1
      lcd.print("Stick Man"); // print text on lcd screen
      lcd.setCursor(count-2,1); // set the cursor on row 2
      lcd.print("Animation"); // print text on lcd screen
    }
    if((count % 2) == 0) { // if the count is even:
      if(count >= 5){ // If the count position is already in the 5th column, then:
        lcd.setCursor(count-5,1); // set the cursor on row 2
        lcd.write(3); // display special characters -> Rstickman3
      }
      if(count >= 4){ // If the count position is already in the 4th column, then:
        lcd.setCursor(count-4,1); // set the cursor on row 2
        lcd.write(4); // display special characters -> Rstickman4
      }
    }
    else { // if the count is odd:
      if(count >= 5){ // If the count position is already in the 5th column, then:
        lcd.setCursor(count-5,1); // set the cursor on row 2
        lcd.write(5); // display special characters -> Rstickman5
      }
      if(count >= 4){ // If the count position is already in the 4th column, then:
        lcd.setCursor(count-4,1); // set the cursor on row 2
        lcd.write(6); // display special characters -> Rstickman6
      }
    }
    delay(400); // delay time -> 0,4 second
  }
}

// stick man moves towards the left
void stickman_left(){
  // custom character initialization -> Lstickman
  lcd.createChar(7,Lstickman1); lcd.createChar(8,Lstickman2); lcd.createChar(9,Lstickman3); lcd.createChar(10,Lstickman4); lcd.createChar(11,Lstickman5); lcd.createChar(12,Lstickman6);

  // count down from 20 to 0
  for (int count = 20; count >= 0; count --){
    lcd.clear(); // erase text on the LCD screen
    if(count <= 18){ // If the count position is already in the 18th column, then:
      lcd.setCursor(count+3,0); // set the cursor on row 1
      lcd.write(7); // display special characters -> Lstickman1
    }
    if(count <= 17){ // If the count position is already in the 17th column, then:
      lcd.setCursor(count+2,0); // set the cursor on row 1
      lcd.write(8); // display special characters -> Lstickman2
    }
    if(count <= 15){ // If the count position is already in the 15th column, then:
      lcd.setCursor(count+5,0); // set the cursor on row 1
      lcd.print("This is my"); // print text on lcd screen
      lcd.setCursor(count+5,1); // set the cursor on row 2
      lcd.print("Ninja Path"); // print text on lcd screen
    }
    if((count % 2) == 0) { // if the count is even:
      if(count <= 18){ // If the count position is already in the 18th column, then:
        lcd.setCursor(count+3,1); // set the cursor on row 2
        lcd.write(9); // display special characters -> Lstickman3
      }
      if(count <= 17){ // If the count position is already in the 17th column, then:
        lcd.setCursor(count+2,1); // set the cursor on row 2
        lcd.write(10); // display special characters -> Lstickman4
      }
    }
    else { // if the count is odd:
      if(count <= 18){ // If the count position is already in the 18th column, then:
        lcd.setCursor(count+3,1); // set the cursor on row 2
        lcd.write(11); // display special characters -> Lstickman5
      }
      if(count <= 17){ // If the count position is already in the 17th column, then:
        lcd.setCursor(count+2,1); // set the cursor on row 2
        lcd.write(12); // display special characters -> Lstickman6
      }
    }
    delay(400); // delay time -> 0,4 second
  }
}
