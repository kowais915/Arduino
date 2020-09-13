void setup(){
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  
}

void loop(){

  
int inp=Serial.parseInt();

if(Serial.available()){
  
  //Turns the LED on if the user enter 1
  
  switch(inp){
  case 1:
  digitalWrite(13, HIGH);
  break;


  //Turns the LED off if the user enter 0
  case 0:
  digitalWrite(13, LOW);
  break;
}
  
  }

  
}
