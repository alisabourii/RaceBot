int ENA = A0;
int M1A = 2;
int M1B = 3;

int ENB = A1;
int M2A = 4;
int M2B = 5;

void setup() {
  for(int i=2; i<=5; i++){
    pinMode(i ,OUTPUT);
  }

}

void loop() {
  forward(200,200);

}

void forward(int rightM, int leftM){
  analogWrite(ENA, 255);
  digitalWrite(M1A,1);
  digitalWrite(M1B,0);
  analogWrite(ENB, 255);
  digitalWrite(M2A,1);
  digitalWrite(M2B,0);
}
