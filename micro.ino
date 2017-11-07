#define U_RE 2 
#define U_YE 3 
#define U_GR 4 
//위쪽 
#define D_RE 5 
#define D_YE 6 
#define D_GR 7 
//아래쪽 
#define R_RE 22 
#define R_YE 24 
#define R_GR 26 
//왼쪽 
#define L_RE 8 
#define L_YE 9 
#define L_GR 11 
//오른쪽; 
#define START 12

void setup() 
{ 
  pinMode(U_RE,OUTPUT); 
  pinMode(U_YE,OUTPUT); 
  pinMode(U_GR,OUTPUT); 
  pinMode(D_RE,OUTPUT); 
  pinMode(D_YE,OUTPUT); 
  pinMode(D_GR,OUTPUT); 
  pinMode(L_RE,OUTPUT); 
  pinMode(L_YE,OUTPUT); 
  pinMode(L_GR,OUTPUT); 
  pinMode(R_RE,OUTPUT); 
  pinMode(R_YE,OUTPUT); 
  pinMode(R_GR,OUTPUT); 
  pinMode(START,INPUT_PULLUP);//풀업저항 
  Serial.begin(9600);
  }
  //RED_YEL_GRE
}

void loop() 
{ 
  if(digitalRead(START)==LOW)//START부분을 눌르면, IF문을 실행할것이다. 
  { 
  digitalWrite(U_YE,HIGH); 
  digitalWrite(D_YE,HIGH);
  digitalWrite(L_YE,HIGH); 
  digitalWrite(R_YE,HIGH); 
  } 
  else 
  { 
  digitalWrite(U_YE,LOW);
  digitalWrite(D_YE,LOW);
  digitalWrite(L_YE,LOW); 
  digitalWrite(R_YE,LOW);

} 
digitalWrite(U_GR,LOW); //위 _초록불 HIGH 
digitalWrite(D_GR,LOW); //아래_초록불 HIGH 
digitalWrite(U_RE,HIGH); 
digitalWrite(D_RE,HIGH);

digitalWrite(R_RE,LOW); 
digitalWrite(L_RE,LOW); 
digitalWrite(R_GR,HIGH); 
digitalWrite(L_GR,HIGH); 
delay(1000); //왼쪽,오른쪽을 그린으로 유지하면서 업,다운을 준비한다. digitalWrite(U_RE,LOW); digitalWrite(D_RE,LOW);

for(int i = 0;i<5;i++) 
{ 
  digitalWrite(U_YE,HIGH);
  digitalWrite(D_YE,HIGH); 
  delay(1000); 
  digitalWrite(U_YE,LOW); 
  digitalWrite(D_YE,LOW); 
  delay(1000); 
  } 
  digitalWrite(U_GR,HIGH);//위 _빨강불 HIGH 
  digitalWrite(D_GR,HIGH);//아래_빨강불 HIGH 
  //업,다운부분을 그린으로 유지하면서 왼쪽,오른쪽을 준비한다.
  digitalWrite(R_GR,LOW);//왼 _초록불 HIGH 
  digitalWrite(L_GR,LOW);//오른_초록불 HIGH 
  digitalWrite(R_RE,HIGH);//왼 _빨강불 LOW 
  digitalWrite(L_RE,HIGH);//오른 _빨강불 LOW 
  delay(1000);

digitalWrite(R_RE,LOW);//왼 _초록불 LOW 
digitalWrite(L_RE,LOW);//오른 _초록불 LOW 
for(int i=0;i<5;i++)
{ 
  digitalWrite(R_YE,HIGH);//왼 _노란불 HIGH 
  digitalWrite(L_YE,HIGH);//오른_노란불 HIGH 
  delay(1000); 
  digitalWrite(R_YE,LOW);//왼 _노란불 LOW 
  digitalWrite(L_YE,LOW);//오른 _노란불 LOW 
  delay(1000); 
  } 
  }
