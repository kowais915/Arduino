void setup(){
  pinMode(13, OUTPUT);
  
}

void loop(){
 
 
 
 //From this point onwards the LED blinks slowly
 // The LED has 4 second period 
 digitalWrite(13, HIGH);
 delay(2000);
 digitalWrite(13, LOW);
 delay(2000);


 digitalWrite(13, HIGH);
 delay(2000);
 digitalWrite(13, LOW);
 delay(2000);


 digitalWrite(13, HIGH);
 delay(2000);
 digitalWrite(13, LOW);
 delay(2000);


 digitalWrite(13, HIGH);
 delay(2000);
 digitalWrite(13, LOW);
 delay(2000);


 digitalWrite(13, HIGH);
 delay(2000);
 digitalWrite(13, LOW);
 delay(2000);


 
//The LED starts blining faster
//The LED has a 1 second period
 digitalWrite(13, HIGH);
 delay(500);
 digitalWrite(13, LOW);
 delay(500);


 digitalWrite(13, HIGH);
 delay(500);
 digitalWrite(13, LOW);
 delay(500);

 digitalWrite(13, HIGH);
 delay(500);
 digitalWrite(13, LOW);
 delay(500);

 digitalWrite(13, HIGH);
 delay(500);
 digitalWrite(13, LOW);
 delay(500);

 digitalWrite(13, HIGH);
 delay(500);
 digitalWrite(13, LOW);
 delay(500);

//The loop ends and starts again.
  
}

