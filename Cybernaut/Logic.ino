
/*void follow_line() {
  Sensor();
  
  if(Line == 0b00011000 || Line==0b11111111 || Line==0b00001000 || Line==0b00010000) //straight line
  {
    motorRun(255,255);
  }
  
  else if (Line == 0b11111000) // left 90 
  {
    motorRun(100, 100);
    delay(10);
    while(1) 
    {
      motorRun(-150,150);
      Sensor();
      if(Line==0b00011000 || Line==0b00001000 || Line==0b00010000) 
      {
        break;
      }
    }
  }
  
  /*else if (Line == 0b00011111) // right 90 
  {
    motorRun(100, 100);
    delay(10);
    while(sen[4]!=1 && sen[3]!=1) 
    {
      motorRun(150,-150);
      delay(10);
      Sensor();
    }
  }*/
  
 /* else if(Line==0b11111111) // intersect && finishing condition
  {
    motorRun (50,50);
    k=0;
    while(1)
    {
      k++;
      Sensor();
      if(Line==0b00110000 || Line==0b00011000 || 0b00001100) 
      {
        break;
      }
      motorRun(50,50);
    }
  }

  else if(Line==0b00011001)// right 30 angle
  {
    motorRun(200,200);
    delay(200);
    motorRun(0,0);
    Sensor();
    while(sen[4]!=1 && sen[3]!=1) 
    {
      motorRun(100,-100);
    }
  }

  else if(Line==0b10011000)// left 30 angle
  {
    motorRun(200,200);
    delay(200);
    motorRun(0,0);
    Sensor();
    while(sen[4]!=1 && sen[3]!=1) 
    {
      motorRun(-100,100);
    }
  }
  
  else if (Line==0b00000000) //sonar********
  {
    motorRun(210,210);
    while(1)
    {
      motorRun(210,210);
      sonar();
      if(a<=26 || b>= 12)
      {
        motorRun(-200,200);
      }
      
    }
  }
  
  if(k>3) //finish
  {
    motorRun(0,0);
    delay(20000);
  }
}*/

