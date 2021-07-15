#include <Servo.h>

Servo oneM;
Servo twoM;
Servo threeM;
Servo fourM;
Servo fiveM;
Servo sixM;

void setup(){
  oneM.attach(4);
  twoM.attach(3);
  threeM.attach(2);
  fourM.attach(7);
  fiveM.attach(6);
  sixM.attach(5);
  
  oneM.write(45);
  twoM.write(45);
  threeM.write(45);
  fourM.write(45);
  fiveM.write(45);
  sixM.write(45);
  
  delay(2000);
  
  oneM.write(90); //first pattern .. WAVING 
  delay(200);
  twoM.write(70);
  delay(1000);
  twoM.write(170);
  delay(1000);
  twoM.write(70);
  delay(1000);
  twoM.write(170);
  delay(1000);
  twoM.write(45);
  delay(200);
  oneM.write(45);
  
  delay(3000);
  
  oneM.write(90); //Second pattern .. Hug
  fourM.write(90);
  twoM.write(120);
  threeM.write(120);
  fiveM.write(120);
  sixM.write(120);
  delay(3000);
  oneM.write(45); 
  fourM.write(45);
  twoM.write(45);
  threeM.write(45);
  fiveM.write(45);
  sixM.write(45);
  
  delay(3000);
  
  oneM.write(180); //third pattern .. Raising both arms
  fourM.write(180);
  delay(3000);
  oneM.write(45); 
  fourM.write(45);
}

void loop(){}