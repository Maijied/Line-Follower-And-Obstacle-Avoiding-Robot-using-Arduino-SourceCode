void follow_line()
{
  Sensor();
  if (Line == 0b00011000 || Line == 0b00001000 || Line== 0b00010000 || Line == 0b11111111) {  /// straight line
    if (K == 3) {
      motorRun(100, 200);
      delay(10);
    }
    /*if (K == -3) {
      motorRun(200, 100);
      delay(10);
    }*/
    if (K == 2) {
      motorRun(100, 180);
      delay(10);
    }
    if (K == -2) {
      motorRun(180, 100);
      delay(10);
    }
    if (K == 1) {
      motorRun(100, 150);
      delay(10);
    }
    if (K == -1) {
      motorRun(150, 100);
      delay(10);
    }

    motorRun(255, 255);

    K = 0;
  }
  else if (Line == 0b00110000  || Line == 0b00100000) {  ///H.R
    motorRun(200, 240);
    K = -1;
  }
  else if (Line == 0b00001100 || Line == 0b00000100) {  /// H.L
    motorRun(240, 200);
    K = 1;
  }
  else if (Line == 0b01100000) {
    motorRun(150, 230);
    K = -2;
  }
  else if (Line == 0b00000110) {
    motorRun(230, 150);
    K = 2;
  }
  else if(Line == 0b11000000){
    motorRun(100,200);
    K=-3;
  }
  else if(Line == 0b00000011){
    motorRun(200,100);
    K=3;
  }
  else if(Line == 0b00011111 || Line == 0b00001111 || Line==00000111)// 90 right
  {
    //motorRun(150,150);
    while(1){
      Sensor();
      motorRun(200,-200);
      if(Line == 0b00001100 || Line == 0b00000010){
        motorRun(-200,200);
        delay(10);
        break;
      }
    }
  }
  else if(Line == 0b11111000 || Line == 0b11110000)// 90 left
  {
    //motorRun(150,150);
    while(1){
      Sensor();
      motorRun(-200,200);
      if(Line == 0b00110000 || Line == 0b01000000){
        motorRun(-200,200);
        delay(10);
        break;
      }
    }
  }

  else if(Line== 0b10010000 || Line==0b10011000 || Line == 0b11010000 || Line == 0b110110000) //30 angle left
  {
    motorRun(100,100);
    delay(100);
    while(1)
    {
      Sensor();
      motorRun(-220,255);
      if(Line == 0b00011000 || Line == 0b00010000){
        motorRun(150,-150);
        delay(10);
        break;
      }
      
    }
  }
  else if(Line == 0b00001001 || Line == 0b00011001 || Line == 0b00001011 || Line == 00011011){
    motorRun(100,100);
    delay(100);
    while(1){
      Sensor();
      motorRun(255,-220);
      if(Line == 0b00011000 || Line == 0b00001000){
        motorRun(-150,150);
        delay(10);
      }
    }
  }
  else if(Line==0b00000000) 
  {
    guha();
  }
  
  /*else if(Line == 0b11111){
    motorRun(155,155);
  }
  else if(Line == 0b00000){
    motorRun(155,155);
  }*/
}

