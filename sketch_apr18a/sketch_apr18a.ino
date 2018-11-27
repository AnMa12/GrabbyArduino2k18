const int buzzer = 13; //buzzer to arduino pin 9


void setup(){
 
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output

}

void loop(){
  bool directie=false;
  if (directie == false){
      for(int i = 0; i < 1000; i++)
    {
      tone(buzzer, i);
      delay(10);
      if(i == 999)
      {
        directie = true;
      }
    }
  }
  else
  {
    for(int i = 1000; i > 0; i--)
    {
      tone(buzzer, i);
      delay(10);
      if(i == 1)
      {
        directie = false;
      }
    }
  }
  
  

  
};
