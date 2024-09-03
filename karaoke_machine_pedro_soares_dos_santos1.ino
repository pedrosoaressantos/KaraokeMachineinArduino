/* code by Pedro Soares dos Santos
Student No. 20053668
Georgian@ILAC
IOT - Arduino Final Project
*/ 

// including the LCD Screen library and notes used on the song methods
#include <LiquidCrystal.h> 
#define NOTE_C4 262
#define NOTE_B3 247
#define NOTE_A3 220
#define NOTE_G3 196
#define NOTE_F3 175
#define NOTE_E3 165
#define NOTE_D4 294
#define NOTE_C5 523
#define NOTE_B4 494
#define NOTE_A4 440
#define NOTE_G4 392
#define NOTE_F4 349
#define NOTE_E4 330
#define NOTE_D5 587
#define NOTE_C6 1047
#define NOTE_B5 988
#define NOTE_A5 880
#define NOTE_G5 784
#define NOTE_F5 698
#define NOTE_E5 659
#define NOTE_D6 1175
#define NOTE_C7 2093
#define NOTE_B6 1976
#define NOTE_A6 1760
#define NOTE_G6 1568
#define NOTE_F6 1397
#define NOTE_E6 1319

// declaring the devices and it's ports
LiquidCrystal lcd(7,6,5,4,3,2);
int buzzerPin = 9;
int pushButton1 = 10;
int pushButton2 = 13;
int pushButton3 = 12;
int redLED = 11;
int yellowLED = 8;
int blueLED = 1;
int greenLED = 0;
int score = random(0,101);

// setting up devices as either OUTPUT or INPUT
void setup(){
lcd.begin(16,2);
pinMode(buzzerPin, OUTPUT);
pinMode(pushButton1, INPUT);
pinMode(pushButton2, INPUT);
pinMode(pushButton3, INPUT);
pinMode(redLED, OUTPUT);
pinMode(yellowLED, OUTPUT);
pinMode(blueLED, OUTPUT);
pinMode(greenLED, OUTPUT);
randomLedShow();
}

// calling the loop method for the main functionality (playing an initial message and the song alongside with lyrics
void loop(){
  
  if(digitalRead(pushButton1) == HIGH){
displayInitialMessage();
}
  
  if(digitalRead(pushButton2) == HIGH){
playFlowersLow();
}

  if(digitalRead(pushButton3) == HIGH){
playFlowersHigh();
}
}

// method for the welcome message
void displayInitialMessage(){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Hello there =)");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("I am the Arduino");
  lcd.setCursor(0,1);
  lcd.print("Portable Karaoke");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Are you ready");
  lcd.setCursor(0,1);
  lcd.print("to sing out loud?");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Just choose your");
  lcd.setCursor(0,1);
  lcd.print("preferred pitch");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("in the buttons"); 
  delay(5000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("The song choice:");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("is Flowers by");
  lcd.setCursor(0,1);
  lcd.print("by Miley Cyrus");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Button 1: low");
  lcd.setCursor(0,1);
  lcd.print("Button 2: high");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Have fun!");
  delay(5000);
  lcd.clear();
}

// method for low-pitched Flowers by Miley Cyrus to be played with its lyrics. notes taken from https://www.youtube.com/watch?v=JxUbZ2Writ4&t=14s
void playFlowersLow(){
  
randomLedShow();
  
lcd.clear();
lcd.setCursor(0,0);
delay(1200);
lcd.print("We were good");
tone(buzzerPin, NOTE_C4,408);
delay(408);
tone(buzzerPin, NOTE_B3,408);
delay(408);
tone(buzzerPin, NOTE_A3,408);
delay(1200);
lcd.setCursor(0,1);
lcd.print("we were gold");
tone(buzzerPin, NOTE_C4,408);
delay(408);
tone(buzzerPin, NOTE_B3,408);
delay(408);
tone(buzzerPin, NOTE_A3,408);
delay(2000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Kinda dream that");
tone(buzzerPin, NOTE_C4,408);
delay(408);
tone(buzzerPin, NOTE_A3,408);
delay(408);  
tone(buzzerPin, NOTE_B3,408);
delay(1200);
lcd.setCursor(0,1);
lcd.print("can't be sold");
tone(buzzerPin, NOTE_G3,408);
delay(1000);
tone(buzzerPin, NOTE_B3,408);
delay(800);
tone(buzzerPin, NOTE_G3,408);
delay(1000);
tone(buzzerPin, NOTE_E3,408);
delay(2000);  
lcd.clear();
lcd.setCursor(0,0);
lcd.print("We were right");
tone(buzzerPin, NOTE_C4,408);
delay(408);
tone(buzzerPin, NOTE_B3,408);
delay(408);
tone(buzzerPin, NOTE_A3,408);
delay(1200);
lcd.setCursor(0,1);
lcd.print("'til we weren't");
tone(buzzerPin, NOTE_C4,408);
delay(408);
tone(buzzerPin, NOTE_B3,408);
delay(408);
tone(buzzerPin, NOTE_A3,408);
delay(2000);  
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Built a home");
tone(buzzerPin, NOTE_C4,408);
delay(408);
tone(buzzerPin, NOTE_A3,408);
delay(408);  
tone(buzzerPin, NOTE_B3,408);
delay(1200);
lcd.setCursor(0,1);
lcd.print("n watched burn");
tone(buzzerPin, NOTE_G3,408);
delay(1000);
tone(buzzerPin, NOTE_B3,408);
delay(800);
tone(buzzerPin, NOTE_G3,408);
delay(1000);
tone(buzzerPin, NOTE_E3,408); 
delay(2000);  
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Mm, I didn't wanna");
tone(buzzerPin, NOTE_D4, 408);
delay(700);
tone(buzzerPin, NOTE_D4, 408);
delay(700);
tone(buzzerPin, NOTE_D4, 408);
delay(300);
tone(buzzerPin, NOTE_D4, 408);
delay(300);
lcd.setCursor(0,1);
lcd.print("leave you");
tone(buzzerPin, NOTE_C4, 408);
delay(300);
tone(buzzerPin, NOTE_A3, 408);
delay(1000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("I didn't");
tone(buzzerPin, NOTE_D4, 408);
delay(700);
tone(buzzerPin, NOTE_D4, 408);
delay(700);
lcd.setCursor(0,1);
lcd.print("wanna lie");
tone(buzzerPin, NOTE_C4, 408);
delay(300);
tone(buzzerPin, NOTE_A3, 408);
delay(2000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Started to cry,");
tone(buzzerPin, NOTE_B3, 408);
delay(408);
tone(buzzerPin, NOTE_C4, 408);
delay(408);
tone(buzzerPin, NOTE_A3, 408);
delay(408);
tone(buzzerPin, NOTE_B3, 408);
delay(408);
lcd.setCursor(0,1);
lcd.print("but then remembered");
tone(buzzerPin, NOTE_A3, 408);
delay(408);
tone(buzzerPin, NOTE_B3, 408);
delay(408);
tone(buzzerPin, NOTE_A3, 408);
delay(408);
tone(buzzerPin, NOTE_B3, 408);
delay(408);
tone(buzzerPin, NOTE_C4, 408);
delay(408);
tone(buzzerPin, NOTE_D4, 408);;
delay(1000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("I can buy");
tone(buzzerPin, NOTE_E4, 408);
delay(408);
tone(buzzerPin, NOTE_E4, 408);
delay(408);
tone(buzzerPin, NOTE_E4, 408);
delay(1000);
lcd.setCursor(0,1);
lcd.print("myself flowers");
tone(buzzerPin, NOTE_D4, 408);
delay(408);
tone(buzzerPin, NOTE_C4, 408);
delay(408);
tone(buzzerPin, NOTE_E4, 408);
delay(408);
tone(buzzerPin, NOTE_F4, 408);
delay(1000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Write my name");
tone(buzzerPin, NOTE_D4, 408);
delay(408);
tone(buzzerPin, NOTE_D4, 408);
delay(408);
tone(buzzerPin, NOTE_D4, 408);
delay(408);
lcd.setCursor(0,1);
lcd.print("in the sand");
tone(buzzerPin, NOTE_C4, 408);
delay(408);
tone(buzzerPin, NOTE_A3, 408);
delay(408);
tone(buzzerPin, NOTE_E4, 408);
delay(1000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Talk to myself");
tone(buzzerPin, NOTE_E4, 408);
delay(408);
tone(buzzerPin, NOTE_E4, 408);
delay(408);
tone(buzzerPin, NOTE_E4, 408);
delay(1000);
lcd.setCursor(0,1);
lcd.print("for hours");
tone(buzzerPin, NOTE_D4, 408);
delay(408);
tone(buzzerPin, NOTE_C4, 408);
delay(408);
tone(buzzerPin, NOTE_E4, 408);
delay(408);
tone(buzzerPin, NOTE_F4, 408);
delay(1000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Say things you");
tone(buzzerPin, NOTE_D4, 408);
delay(408);
tone(buzzerPin, NOTE_D4, 408);
delay(408);
tone(buzzerPin, NOTE_C4, 408);
delay(408);
lcd.setCursor(0,1);
lcd.print("don't understand");
tone(buzzerPin, NOTE_E4, 408);
delay(408);
tone(buzzerPin, NOTE_D4, 408);
delay(408);
tone(buzzerPin, NOTE_D4, 408);
delay(408);
tone(buzzerPin, NOTE_C4, 408);
delay(2000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("I can take");
tone(buzzerPin, NOTE_G4, 408);
delay(408);
tone(buzzerPin, NOTE_E4, 408);
delay(408);
tone(buzzerPin, NOTE_G4, 408);
delay(408);
lcd.setCursor(0,1);
lcd.print("myself dancing");
tone(buzzerPin, NOTE_E4, 408);
delay(408);
tone(buzzerPin, NOTE_G4, 408);
delay(408);
tone(buzzerPin, NOTE_A4, 408);
delay(1000);
tone(buzzerPin, NOTE_E4, 408);
delay(408);
tone(buzzerPin, NOTE_D4, 408);
delay(408);
tone(buzzerPin, NOTE_C4, 408);
delay(1000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("And I can hold");
tone(buzzerPin, NOTE_D4, 408);
delay(408);
tone(buzzerPin, NOTE_D4, 408);
delay(408);
tone(buzzerPin, NOTE_D4, 408);
delay(408);
tone(buzzerPin, NOTE_G4, 408);
delay(800);
lcd.setCursor(0,1);
lcd.print("my own hand");
tone(buzzerPin, NOTE_F4, 408);
delay(408);
tone(buzzerPin, NOTE_E4, 408);
delay(800);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Yeah, I can");
tone(buzzerPin, NOTE_E4, 408);
delay(408);
tone(buzzerPin, NOTE_D4, 408);
delay(408);
tone(buzzerPin, NOTE_C4, 408);
delay(408);
lcd.setCursor(0,1);
lcd.print("love me ");
tone(buzzerPin, NOTE_A4, 408);
delay(408);
tone(buzzerPin, NOTE_E4, 408);
delay(408);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("better than");
tone(buzzerPin, NOTE_D4, 408);
delay(408);
tone(buzzerPin, NOTE_C4, 408);
delay(408);
tone(buzzerPin, NOTE_B3, 408);
delay(408);
lcd.setCursor(0,1);
lcd.print("you can");
tone(buzzerPin, NOTE_C4, 408);
delay(408);
tone(buzzerPin, NOTE_A3, 408);
delay(2000);

randomLedShow();
displayScore();
randomLedShow();
}  

// method for high-pitched Flowers by Miley Cyrus to be played with its lyrics. notes taken from https://www.youtube.com/watch?v=JxUbZ2Writ4&t=14s
void playFlowersHigh(){

randomLedShow();
  
lcd.clear();
lcd.setCursor(0,0);
delay(1200);
lcd.print("We were good");
tone(buzzerPin, NOTE_C6,408);
delay(408);
tone(buzzerPin, NOTE_B5,408);
delay(408);
tone(buzzerPin, NOTE_A5,408);
delay(1200);
lcd.setCursor(0,1);
lcd.print("we were gold");
tone(buzzerPin, NOTE_C6,408);
delay(408);
tone(buzzerPin, NOTE_B5,408);
delay(408);
tone(buzzerPin, NOTE_A5,408);
delay(2000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Kinda dream that");
tone(buzzerPin, NOTE_C6,408);
delay(408);
tone(buzzerPin, NOTE_A5,408);
delay(408);  
tone(buzzerPin, NOTE_B5,408);
delay(1200);
lcd.setCursor(0,1);
lcd.print("can't be sold");
tone(buzzerPin, NOTE_G5,408);
delay(1000);
tone(buzzerPin, NOTE_B5,408);
delay(800);
tone(buzzerPin, NOTE_G5,408);
delay(1000);
tone(buzzerPin, NOTE_E5,408);
delay(2000);  
lcd.clear();
lcd.setCursor(0,0);
lcd.print("We were right");
tone(buzzerPin, NOTE_C6,408);
delay(408);
tone(buzzerPin, NOTE_B6,408);
delay(408);
tone(buzzerPin, NOTE_A5,408);
delay(1200);
lcd.setCursor(0,1);
lcd.print("'til we weren't");
tone(buzzerPin, NOTE_C6,408);
delay(408);
tone(buzzerPin, NOTE_B5,408);
delay(408);
tone(buzzerPin, NOTE_A5,408);
delay(2000);  
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Built a home");
tone(buzzerPin, NOTE_C6,408);
delay(408);
tone(buzzerPin, NOTE_A5,408);
delay(408);  
tone(buzzerPin, NOTE_B5,408);
delay(1200);
lcd.setCursor(0,1);
lcd.print("n watched burn");
tone(buzzerPin, NOTE_G5,408);
delay(1000);
tone(buzzerPin, NOTE_B5,408);
delay(800);
tone(buzzerPin, NOTE_G5,408);
delay(1000);
tone(buzzerPin, NOTE_E5,408); 
delay(2000);  
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Mm, I didn't wanna");
tone(buzzerPin, NOTE_D6, 408);
delay(700);
tone(buzzerPin, NOTE_D6, 408);
delay(700);
tone(buzzerPin, NOTE_D6, 408);
delay(300);
tone(buzzerPin, NOTE_D6, 408);
delay(300);
lcd.setCursor(0,1);
lcd.print("leave you");
tone(buzzerPin, NOTE_C6, 408);
delay(300);
tone(buzzerPin, NOTE_A5, 408);
delay(1000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("I didn't");
tone(buzzerPin, NOTE_D6, 408);
delay(700);
tone(buzzerPin, NOTE_D6, 408);
delay(700);
lcd.setCursor(0,1);
lcd.print("wanna lie");
tone(buzzerPin, NOTE_C6, 408);
delay(300);
tone(buzzerPin, NOTE_A5, 408);
delay(2000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Started to cry,");
tone(buzzerPin, NOTE_B5, 408);
delay(408);
tone(buzzerPin, NOTE_C6, 408);
delay(408);
tone(buzzerPin, NOTE_A5, 408);
delay(408);
tone(buzzerPin, NOTE_B5, 408);
delay(408);
lcd.setCursor(0,1);
lcd.print("but then remembered");
tone(buzzerPin, NOTE_A5, 408);
delay(408);
tone(buzzerPin, NOTE_B5, 408);
delay(408);
tone(buzzerPin, NOTE_A5, 408);
delay(408);
tone(buzzerPin, NOTE_B5, 408);
delay(408);
tone(buzzerPin, NOTE_C6, 408);
delay(408);
tone(buzzerPin, NOTE_D6, 408);;
delay(1000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("I can buy");
tone(buzzerPin, NOTE_E6, 408);
delay(408);
tone(buzzerPin, NOTE_E6, 408);
delay(408);
tone(buzzerPin, NOTE_E6, 408);
delay(1000);
lcd.setCursor(0,1);
lcd.print("myself flowers");
tone(buzzerPin, NOTE_D6, 408);
delay(408);
tone(buzzerPin, NOTE_C6, 408);
delay(408);
tone(buzzerPin, NOTE_E6, 408);
delay(408);
tone(buzzerPin, NOTE_F6, 408);
delay(1000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Write my name");
tone(buzzerPin, NOTE_D6, 408);
delay(408);
tone(buzzerPin, NOTE_D6, 408);
delay(408);
tone(buzzerPin, NOTE_D6, 408);
delay(408);
lcd.setCursor(0,1);
lcd.print("in the sand");
tone(buzzerPin, NOTE_C6, 408);
delay(408);
tone(buzzerPin, NOTE_A5, 408);
delay(408);
tone(buzzerPin, NOTE_E6, 408);
delay(1000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Talk to myself");
tone(buzzerPin, NOTE_E6, 408);
delay(408);
tone(buzzerPin, NOTE_E6, 408);
delay(408);
tone(buzzerPin, NOTE_E6, 408);
delay(1000);
lcd.setCursor(0,1);
lcd.print("for hours");
tone(buzzerPin, NOTE_D6, 408);
delay(408);
tone(buzzerPin, NOTE_C6, 408);
delay(408);
tone(buzzerPin, NOTE_E6, 408);
delay(408);
tone(buzzerPin, NOTE_F6, 408);
delay(1000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Say things you");
tone(buzzerPin, NOTE_D6, 408);
delay(408);
tone(buzzerPin, NOTE_D6, 408);
delay(408);
tone(buzzerPin, NOTE_C6, 408);
delay(408);
lcd.setCursor(0,1);
lcd.print("don't understand");
tone(buzzerPin, NOTE_E6, 408);
delay(408);
tone(buzzerPin, NOTE_D6, 408);
delay(408);
tone(buzzerPin, NOTE_D6, 408);
delay(408);
tone(buzzerPin, NOTE_C6, 408);
delay(2000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("I can take");
tone(buzzerPin, NOTE_G6, 408);
delay(408);
tone(buzzerPin, NOTE_E6, 408);
delay(408);
tone(buzzerPin, NOTE_G6, 408);
delay(408);
lcd.setCursor(0,1);
lcd.print("myself dancing");
tone(buzzerPin, NOTE_E6, 408);
delay(408);
tone(buzzerPin, NOTE_G6, 408);
delay(408);
tone(buzzerPin, NOTE_A6, 408);
delay(1000);
tone(buzzerPin, NOTE_E6, 408);
delay(408);
tone(buzzerPin, NOTE_D6, 408);
delay(408);
tone(buzzerPin, NOTE_C6, 408);
delay(1000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("And I can hold");
tone(buzzerPin, NOTE_D6, 408);
delay(408);
tone(buzzerPin, NOTE_D6, 408);
delay(408);
tone(buzzerPin, NOTE_D6, 408);
delay(408);
tone(buzzerPin, NOTE_G6, 408);
delay(800);
lcd.setCursor(0,1);
lcd.print("my own hand");
tone(buzzerPin, NOTE_F6, 408);
delay(408);
tone(buzzerPin, NOTE_E6, 408);
delay(800);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Yeah, I can");
tone(buzzerPin, NOTE_E6, 408);
delay(408);
tone(buzzerPin, NOTE_D6, 408);
delay(408);
tone(buzzerPin, NOTE_C6, 408);
delay(408);
lcd.setCursor(0,1);
lcd.print("love me ");
tone(buzzerPin, NOTE_A6, 408);
delay(408);
tone(buzzerPin, NOTE_E6, 408);
delay(408);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("better than");
tone(buzzerPin, NOTE_D6, 408);
delay(408);
tone(buzzerPin, NOTE_C6, 408);
delay(408);
tone(buzzerPin, NOTE_B5, 408);
delay(408);
lcd.setCursor(0,1);
lcd.print("you can");
tone(buzzerPin, NOTE_C6, 408);
delay(408);
tone(buzzerPin, NOTE_A5, 408);
delay(2000);
  
randomLedShow();
displayScore();
randomLedShow();
}  

// method for the display score message at the end of the song
void displayScore(){
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Your score is:");
lcd.setCursor(0,1);
lcd.print(score);
delay(3000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Thanks for");
lcd.setCursor(0,1);
lcd.print("playing with us!");
delay(3000);
lcd.clear();
}

// method for led show
void randomLedShow(){
digitalWrite(redLED, HIGH);   
delay(100);
digitalWrite(greenLED, HIGH);   
delay(100);
digitalWrite(yellowLED, HIGH);  
delay(100);
digitalWrite(blueLED, HIGH);  
delay(100);
digitalWrite(redLED, LOW); 
delay(100);
digitalWrite(greenLED, LOW);   
delay(100);
digitalWrite(yellowLED, LOW);   
delay(100);
digitalWrite(blueLED, LOW);  
delay(100);
}

