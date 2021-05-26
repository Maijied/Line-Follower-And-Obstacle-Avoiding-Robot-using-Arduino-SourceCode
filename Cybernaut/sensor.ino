int Sensor() {
  sen[0]= digitalRead(s8);
  sen[1]= digitalRead(s7);
  sen[2]= digitalRead(s6);
  sen[3]= digitalRead(s5);
  sen[4]= digitalRead(s4);
  sen[5]= digitalRead(s3);
  sen[6]= digitalRead(s2);
  sen[7]= digitalRead(s1);



for (int i = 0; i <= 7; i++) {
      Serial.print(sen[i]);
      Serial.print(" ");
    }
    Serial.print("\n");
    //delay(100);*/
    Line = 128*sen[0]+ 64*sen[1]+ 32*sen[2]+ 16*sen[3]+ 8*sen[4]+ 4*sen[5]+ 2*sen[6]+ 1*sen[7];
    return Line;
}
