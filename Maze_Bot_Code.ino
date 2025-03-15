int const IN1 = 10;
int const IN2 = 9;
int const IN3 = 5;
int const IN4 = 3;
int const SL=12;
int const SM=7;
int const SR=2;


void setup() {
  // put your setup code here, to run once:
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(SL,INPUT);
  pinMode(SM,INPUT);
  pinMode(SR,INPUT);
}

void moveForward(){
  analogWrite(IN1,127);
  analogWrite(IN2,0);
  analogWrite(IN3,0);
  analogWrite(IN4,127);
}

  
void moveBackward(){
analogWrite(IN1,0);
analogWrite(IN2,127);
analogWrite(IN3,127);
analogWrite(IN4,0);
}
void moveRight(){
analogWrite(IN1,127);
analogWrite(IN2,0);  
analogWrite(IN3,127);
analogWrite(IN4,0);
}
void moveLeft(){
analogWrite(IN1,0);
analogWrite(IN2,127);
analogWrite(IN3,0);
analogWrite(IN4,127);
}

void loop() {
  // put your main code here, to run repeatedly:
//  moveForward()  ;
  while(1){
    int l=digitalRead(SL);
    int m=digitalRead(SM);
    int r=digitalRead(SR);
    if(l==0 && m==1 && r==0){
    moveForward();
    delay(50);
    }
  

    else if(l==1 && m==0 && r==0){
    moveLeft(); // while moving forward 
    delay(170);
    
    }

    else if((l==0 && m==0 && r==1)){
    moveRight();  // while moving forward 
    delay(50);
    }

    else if(l==1 && m==1 && r==0){
    moveForward();
    delay(50);
    l=digitalRead(SL);
     m=digitalRead(SM);
     r=digitalRead(SR);
    if(l==0 && m==0 && r==0){
      moveLeft();
      delay(900);
    }
    // delayMicroseconds(50);
    }
    
    else if(l==1 && m==1 && r==1){
    
    moveRight();
    delay(50);
    
     }
    
     
    
    else if(l==0 && m==1 && r==1){
    moveRight();
    delay(50);
    }

    else if(l==0 && m==0 && r==0){
      moveRight();
      delay(50);
    }
   } 
   
}