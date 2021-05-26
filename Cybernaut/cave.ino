void guha()
{
  distance1=sonar1.ping_cm();
  distance2=sonar2.ping_cm();
  if(distance2<7){
    while(1){
      motorRun(220, 150);
      distance2=sonar2.ping_cm();
      if(distance2>=7){
        break;
      }
      
    }
  }
  if(distance2>7){
    while(1){
      motorRun(150,220);
      distance2=sonar2.ping_cm();
      if(distance2<=7){
        break;
      }
      
    }
  }
  if(distance1<10 && distance2>50){
    
    samne();
    /*while(1){
      motorRun(-200,200);
      delay(500);
      distance2=sonar2.ping_cm();
      if(distance2<=7) 
      {
        break;
      }
    }*/
  }
}


void samne(){
  motorRun(200,200);
  delay(100);
  while(1){
    motorRun(-200,200);
    distance2=sonar2.ping_cm();
    if(distance2<7){
      break;
    }
    
  }
  
}

