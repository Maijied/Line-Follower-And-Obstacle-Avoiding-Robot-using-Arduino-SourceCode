void Leftforward(int x) {
  digitalWrite(lma, LOW);
  digitalWrite(lmb, HIGH);
  analogWrite(enb, x);
}

void Leftbackward(int x) {
  digitalWrite(lma, HIGH);
  digitalWrite(lmb, LOW);
  analogWrite(enb, x);
}

void Rightforward(int y) {
  digitalWrite(rma, HIGH);
  digitalWrite(rmb, LOW);
  analogWrite(ena, y);
}

void Rightbackward(int y) {
  digitalWrite(rma, LOW);
  digitalWrite(rmb, HIGH);
  analogWrite(ena, y);
}

void Leftstop() {
  digitalWrite(lma, LOW);
  digitalWrite(lmb, LOW);
}

void Rightstop() {
  digitalWrite(rma, LOW);
  digitalWrite(rmb, LOW);
}

void stopmotor() {
  Leftstop();
  Rightstop();
}

void motorRun(int Leftspeed, int Rightspeed) {

  if (Leftspeed > 0) {
    Leftforward(Leftspeed);
  }

  else if (Leftspeed < 0) {
    Leftbackward(-Leftspeed);
  }

  else if (Leftspeed == 0) {
    Leftstop();
  }

  if (Rightspeed > 0) {
    Rightforward(Rightspeed);
  }

  else if (Rightspeed < 0) {
    Rightbackward(-Rightspeed);
  }

  else if (Rightspeed == 0) {
    Rightstop();
  }

}

