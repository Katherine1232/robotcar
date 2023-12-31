

#include <NewPing.h>
#include <cstdlib>

#define MAX_DISTANCE 400 // Maximum distance we want to measure (in centimeters).
#define THETA //angle of sensors in radians

int action;

NewPing Sensor1(A0, A1, MAX_DISTANCE); //Left
NewPing Sensor2(7, 1, MAX_DISTANCE); //centre
NewPing Sensor3(0, 4, MAX_DISTANCE); //right


void setup() {
  Serial.begin(9600);
  Serial.print("Initializing SD card...");

  if (!SD.begin()) {
    Serial.println("initialization failed!");
    return;
  }
  Serial.println("initialization done.");
  String file = rand() + ".txt"; //call file random number
  myFile = SD.open(file, FILE_WRITE);

  if(!myFile){
      // if the file didn't open, print an error:
      Serial.println("error opening" + file);
  }
}

void loop() {
  delay(500);
  
  action = checkDistance();
  //mapLocation(action);
  switch(action){
    case: 0
  }

}

int checkDistance(){
  
  int distance1 = sensor1.ping_cm()*sine(THETA); 
  int distance2 = sensor2.ping_cm();
  int distance3 = sensor3.ping_cm()*sine(THETA);

}

void mapLocation(int action){
  //start in middle of 100x100 file
  //cout with each print, if you reach count = 100, check that youe haven't reached the first row
  // if you have, make new text file, double the amount of space (so use a 200x200 this time) and reprint all the data from the first file into the new one
  switch(action){
    case 0:
        
  }
}

//MAPPING
//check distance
digitalWrite (trigger, HIGH);
delayMicroseconds (10);
digitalWrite (trigger, LOW);
delayMicroseconds (2)
    //as long as left and right sensors don't change, keep going
    //if centre sensor starts getting shorter, stop
    //if either side sensor has a significant change, move in that direction
    //if centre distance gets to 10cm, stop and turn in direction of largest distance
//int, return numberic decision
//map position
//wheels do whatever action required (turn, stop)
//repeat loop


//RACING
