#include <NewPing.h>

#define s1 51
#define s2 49
#define s3 47
#define s4 45
#define s5 43
#define s6 41
#define s7 39
#define s8 37

#define lma 48
#define lmb 46
#define rma 52
#define rmb 50
#define ena 8
#define enb 9
#define trig1 2
#define echo1 3
#define trig2 4 
#define echo2 5
#define Max 200

int sen[8];
int sensor[8];
int a, b, Line, K = 0, s;
int duration;
int distance1;
int distance2;


NewPing sonar1(trig1, echo1, Max);
NewPing sonar2(trig2, echo2, Max);

void setup() {
  Serial.begin(9600);
  pinMode(48, OUTPUT);
  pinMode(46, OUTPUT);
  pinMode(52, OUTPUT);
  pinMode(50, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

  pinMode(51, INPUT);
  pinMode(47, INPUT);
  pinMode (49, INPUT);
  pinMode (45, INPUT);
  pinMode (43, INPUT);
  pinMode (41, INPUT);
  pinMode (39, INPUT);
  pinMode (37, INPUT);

  //pinMode (trig1, OUTPUT);
  //pinMode (echo1, INPUT);

  //pinMode (trig2, OUTPUT);
  //pinMode (echo2, INPUT);

}

void loop() {
  follow_line();
  // motorRun(255,255);
  //Sensor();
  //sonar1();
  //delay(200);
  //sonar2();
  //delay(200);
  //distance1=sonar1.ping_cm();
  //distance2=sonar2.ping_cm();
  //Serial.print("dis1 ");
  //Serial.println(distance1);
  //delay(150);
  //Serial.print("dis2");
  //Serial.println(distance2);
  //delay(150);
  //guha();
}
