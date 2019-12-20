//----------------------------------------------------------------
//-- Otto All moves setup
//-- You can add functions, gestures or sounds in loop
//-- CC BY SA (http://ottodiy.com)
//-- 25 October 2018
//-- 26 May 2019, TienND tested. OK
//-----------------------------------------------------------------
#include <Servo.h> 
#include <Oscillator.h>
#include <US.h>
  #include <Otto.h>
#define TRIM_RR 7
#define TRIM_RL 4
#define TRIM_YR  4
#define TRIM_YL -7
#define ledPin 11
int state = 0;
Otto Otto;  //This is Otto!
//---------------------------------------------------------
//-- First step: Make sure the pins for servos are in the right position
/*
         --------------- 
        |     O   O     |
        |---------------|
YR 3==> |               | <== YL 2
         --------------- 
            ||     ||
RR 5==>   -----   ------  <== RL 4
         |-----   ------|
*/
  #define PIN_YL 2 //servo[2]   
  #define PIN_YR 3 //servo[3]
  #define PIN_RL 4 //servo[4]
  #define PIN_RR 5 //servo[5]
/*SOUNDS******************
 * S_connection  S_disconnection  S_buttonPushed S_mode1 S_mode2 S_mode3 S_surprise S_OhOoh  S_OhOoh2  S_cuddly 
 * S_sleeping  S_happy S_superHappy S_happy_short S_sad S_confused S_fart1 S_fart2  S_fart3 
 */
/*MOVEMENTS LIST**************
 * dir=1---> FORWARD/LEFT
 * dir=-1---> BACKWARD/RIGTH
 * T : amount of movement. HIGHER VALUE SLOWER MOVEMENT usually 1000 (from 600 to 1400)
 * h: height of mov. around 20
     jump(steps=1, int T = 2000);
     walk(steps, T, dir);
     turn(steps, T, dir);
     bend (steps, T, dir); //usually steps =1, T=2000
     shakeLeg (steps, T, dir);
     updown(steps, T, HEIGHT);
     swing(steps, T, HEIGHT);
     tiptoeSwing(steps, T, HEIGHT);
     jitter(steps, T, HEIGHT); (small T)
     ascendingTurn(steps, T, HEIGHT);
     moonwalker(steps, T, HEIGHT,dir);
     crusaito(steps, T, HEIGHT,dir);
     flapping(steps, T, HEIGHT,dir);
/*GESTURES LIST***************
OttoHappy OttoSuperHappy  OttoSad   OttoSl eeping  OttoFart  OttoConfused OttoLove  OttoAngry   
OttoFretful OttoMagic  OttoWave  OttoVictory  OttoFail*/
///////////////////////////////////////////////////////////////////
//-- Global Variables -------------------------------------------//
///////////////////////////////////////////////////////////////////
bool obstacleDetected = false;
int distance = 0;
///////////////////////////////////////////////////////////////////
//-- Setup ------------------------------------------------------//
///////////////////////////////////////////////////////////////////
#define INTERVALTIME 10.0 



void setup(){
   pinMode(ledPin, OUTPUT);
  //digitalWrite(ledPin, LOW);
   Serial.begin(9600);
    pinMode(11,INPUT);
  //Set the servo pins
  Otto.init(PIN_YL,PIN_YR,PIN_RL,PIN_RR,true);
  Serial.println("Voice: em chao cac bac");
  Otto.sing(S_connection); //Otto wake up!
  Serial.println("home");
  Otto.home();
  delay(50);
}
///////////////////////////////////////////////////////////////////
//-- Principal Loop ---------------------------------------------//
//--Uncomment lines or add you own-------------------------------//
///////////////////////////////////////////////////////////////////
void loop() {
//          OBSTACLE MODE ON!!!! 
         Serial.println("giu khoang cach hop ly");
          obstacleMode();
//          
//          Otto.sing(S_surprise);
//         Serial.println("Tien ve phia truoc 2 buoc");
//          Otto.walk(2,1000,1); //2 steps FORWARD
//          
//          Otto.sing(S_OhOoh);
//         Serial.println("Lui ve phia sau 2 buoc");
//          Otto.walk(2,1000,-1); //2 steps BACKSWARD
//          Otto.sing(S_OhOoh2);
//Serial.println("playGesture: OttoFretful");          
//          Otto.playGesture(OttoFretful);
//          
//          Otto.sing(S_cuddly);
//Serial.println("home");          
//          Otto.home();
//Serial.println("playGesture: OttoSleeping");  //nhún hai chân        
//          Otto.playGesture(OttoSleeping);
//          Otto.sing(S_sleeping);
//          delay(1000);
//          Otto.sing(S_happy);
//Serial.println("playGesture: OttoHappy");//nhấc 1 chân
         // Otto.playGesture(OttoHappy);
          //Otto.turn(2,1000,1);//2 steps turning RIGHT  
          //Otto.sing(S_happy_short);              
//          delay(50);
//Serial.println("playGesture: OttoSuperHappy");//nhấc 1 chân đi bộ 2 bước
         // Otto.playGesture(OttoSuperHappy);
//          Otto.sing(S_superHappy);
//          Otto.turn(2,1000,-1);//2 steps turning RIGHT 
// Serial.println("playGesture: OttoSad");
 //         Otto.playGesture(OttoSad);
//          Otto.sing(S_sad);               
//          delay(50);
//          Serial.println("moonwalker");
//          Otto.moonwalker(3, 500, 29, -1);//2 chân liên tiếp 
// Serial.println("playGesture: OttoConfused");
         // Otto.playGesture(OttoConfused);
//          Otto.sing(S_confused);
  //        Otto.home();
//          Otto.bend (1, 2000, 1);// nhấc 1 chân
//Serial.println("playGesture: OttoVictory");
 //         Otto.playGesture(OttoVictory);
//          Serial.println("home");
//          Otto.home();
//          Serial.println("updown");
//          Otto.updown(1, 2000, 22);
//          Serial.println("playGesture: OttoMagic");
//          Otto.playGesture(OttoMagic);
//          Otto.home();
//          Serial.println("playGesture: OttoFail");
//          Otto.playGesture(OttoFail);    // Nghiên quá, bot sẽ bị lộn
//          Serial.println("Voice: Ket thuc");
//          Otto.sing(S_disconnection);
            
            //int onPos[4] = {90,90,150,90};
//            Otto._moveServos(1000,sadPos);
//            Otto.home();
//            delay(2000);
           // Otto._moveServos(400,onPos);
              
 //           Otto.home();
 //nhunchan();
 //co1chan();
 //duoichan();
 //chaochan();
 //nhun2chan
 //turnleft();
//dongtac1();
 //dongtac2();
 //dongtac3();
 //dongtac4();
 //dongtac5();
 //dongtac6();
 //dongtac7();
 //dongtac8();
 //dongtac9();
 //dongtac10();
 //dongtac11();
 //dongtac12();
 //dongtac13();
 //dongtac14();
 //dongtac15();
 //dongtac16();
 //dongtac17();
 //dongtac18();
 //dongtac19();
 //dongtac20();


 //chucnang1();
 //chucnang2();
 //chucnang3();
 //chucnang4();
 //chucnang5();
 
 if(Serial.available() > 0){ // Checks whether data is comming from the serial port
    state = Serial.read(); // Reads the data from the serial port
 }
 if (state == '0') {
  digitalWrite(ledPin, LOW); // Turn LED OFF
  Otto.walk(2,500,-1);
  
  Serial.println("LED: OFF"); // Send back, to the phone, the String "LED: ON"
  state = 0;
 }
 else if (state == '1') {
  digitalWrite(ledPin, HIGH);
    Otto.turn(2,1000,-1);
  Serial.println("LED: ON");
  state = 0;
 } 
 else if (state == '3') {
  digitalWrite(ledPin, HIGH);
  nhunchan();
  Serial.println("LED: ON");;
  state = 0;
 } 
 else if (state == '4') {
  digitalWrite(ledPin, HIGH);
  co2chan();
  Serial.println("LED: ON");;
  state = 0;
 } 
 else if (state == '5') {
  digitalWrite(ledPin, HIGH);
 chaochan();
  Serial.println("LED: ON");;
  state = 0;
 } 
 else if (state == '6') {
  digitalWrite(ledPin, HIGH);
  co1chan();
  Serial.println("LED: ON");;
  state = 0;
 } 
}
///////////////////////////////////////////////////////////////////
//-- Function to avoid obstacles
void nhunchan(){
  int sadPos[4] = {110,70,20,160};
  Otto._moveServos(1000,sadPos);
  Otto.home();
  delay(400);
}
void co1chan(){
  int onPos[4] = {90,90,150,90};
  Otto._moveServos(500,onPos);
  Otto.home();
    delay(400);
  
}
void co2chan(){
  int onPos[4] = {90,90,150,30};
  Otto._moveServos(500,onPos);
  Otto.home();
    delay(400);
}
void duoichan(){
  int onPos[4] = {90,90,160,20};
  Otto._moveServos(500,onPos);
  Otto.home();
    delay(400);
}
void nhun2chan(){
  int onPos[4] = {90,90,150,30};
  Otto._moveServos(500,onPos);
  Otto.home();
    delay(400);
}
void chaochan(){
         // Otto.playGesture(OttoFail); 
  int onPos[4] = {90,90,70,90};
  int onPos2[4] = {90,90,55,90};
  int onPos3[4] = {90,90,32,90};
  int onPos4[4] = {90,90,20,90};
  int onPos5[4] = {90,90,20,160};
  int onPos6[4] = {90,90,20,148};
  int onPos7[4] = {90,90,20,135};
  int onPos8[4] = {90,90,20,110};
  Otto._moveServos(500,onPos);
   delay(200);
    Otto._moveServos(500,onPos2);
   delay(200);
  Otto._moveServos(500,onPos3);
   delay(200);
  Otto._moveServos(500,onPos4);
  delay(200);
  Otto._moveServos(500,onPos8);
   delay(200);
    Otto._moveServos(500,onPos7);
   delay(200);
  Otto._moveServos(500,onPos6);
   delay(200);
  Otto._moveServos(500,onPos5);
   delay(200);
  Otto.home();
   
}

void dongtac1(){
  int onPos[4] = {150,150,90,90};
  Otto._moveServos(500,onPos);
  Otto.home();
    delay(400);
  }
void dongtac2(){
  int onPos[4] = {90,90,30,150};
  int onPos1[4] = {50,90,30,150};
  int onPos3[4] = {130,90,30,150};
   int onPos2[4] = {90,90,30,150};
  Otto._moveServos(500,onPos);
    delay(200);
   Otto._moveServos(500,onPos1);
    delay(200);
    Otto._moveServos(500,onPos2);
    delay(200);
    Otto._moveServos(500,onPos3);
    delay(200);
   
  }
void dongtac3(){
  int onPos[4] = {150,30,90,90};
  Otto._moveServos(500,onPos);
  Otto.home();
    delay(400);
  }
void dongtac4(){
  int onPos[4] = {30,150,90,90};
  Otto._moveServos(500,onPos);
  Otto.home();
    delay(400);
  }
void dongtac5(){
  int onPos[4] = {30,30,90,90};
  Otto._moveServos(500,onPos);
  Otto.home();
    delay(400);
  }
void dongtac6(){
  int onPos[4] = {90,90,30,30};
  Otto._moveServos(500,onPos);
  Otto.home();
    delay(400);
  }
void dongtac7(){
  int onPos[4] = {90,90,150,150};
  Otto._moveServos(500,onPos);
  Otto.home();
    delay(400);
  }
void dongtac8(){
  int onPos[4] = {90,90,30,30};
  int onPos2[4] = {90,90,150,150};
  Otto._moveServos(500,onPos);
    delay(200);
  Otto.home();
   Otto._moveServos(500,onPos2);
    delay(200);  
  Otto.home();
  }
void dongtac9(){
  int onPos[4] = {150,30,90,90};
  int onPos1[4] = {30,150,90,90};
  Otto._moveServos(500,onPos);
    delay(200);
  Otto.home();
   Otto._moveServos(500,onPos1);
    delay(200);  
  Otto.home();
  }
void dongtac10(){
  int onPos[4] = {30,30,50,130};
  int onPos1[4] = {150,150,50,130};
  Otto._moveServos(500,onPos);
    delay(200);
  Otto.home();
   Otto._moveServos(500,onPos1);
    delay(200);  
  Otto.home();
  }
void dongtac11(){
  int onPos[4] = {30,30,90,90};
  int onPos1[4] = {150,150,90,90};
  Otto._moveServos(500,onPos);
    delay(200);
  Otto.home();
   Otto._moveServos(500,onPos1);
    delay(200);  
  Otto.home();
  }
void dongtac12(){
  int onPos[4] = {90,90,90,140};
  int onPos1[4] = {90,90,40,140};
  Otto._moveServos(500,onPos);
    delay(200);
   Otto._moveServos(500,onPos1);
    delay(200); 
  }
void dongtac13(){
  int onPos[4] = {90,90,40,90};
  int onPos1[4] = {90,90,40,140};
  Otto._moveServos(500,onPos);
    delay(200);
   Otto._moveServos(500,onPos1);
    delay(200); 
  }
void dongtac14(){
  int onPos[4] = {40,140,150,30};
  int onPos1[4] = {90,90,150,30};
  Otto._moveServos(500,onPos);
    delay(200);
   Otto._moveServos(500,onPos1);
    delay(200); 
  }
void dongtac15(){
  int onPos[4] = {40,40,150,30};
  int onPos1[4] = {90,90,150,30};
  Otto._moveServos(500,onPos);
    delay(200);
   Otto._moveServos(500,onPos1);
    delay(200); 
  }
void dongtac16(){
  int onPos[4] = {120,60,30,150};
  int onPos1[4] = {60,120,30,150};
  Otto._moveServos(500,onPos);
    delay(200);
   Otto._moveServos(500,onPos1);
    delay(200);
    Otto.home();
  }
void dongtac17(){
  int onPos[4] = {120,60,30,150};
  int onPos1[4] = {60,120,150,30};
  Otto._moveServos(500,onPos);
    delay(200);
    Otto.home();
   Otto._moveServos(500,onPos1);
    delay(200);
    Otto.home(); 
  }
void dongtac18(){
  int onPos[4] = {90,90,30,150};
  int onPos1[4] = {50,130,30,150};
  Otto._moveServos(500,onPos);
    delay(200);
    Otto.home();
   Otto._moveServos(500,onPos1);
    delay(200);
    Otto.home();
  }
void dongtac19(){
  int onPos[4] = {90,90,30,150};
  int onPos1[4] = {50,130,30,150};
  int onPos2[4] = {50,130,60,120};
  Otto._moveServos(500,onPos);
    delay(200);
   Otto._moveServos(500,onPos1);
    delay(200);
    Otto._moveServos(500,onPos2);
    delay(200);
    Otto.home(); 
  }
void dongtac20(){
  int onPos[4] = {90,90,30,150};
  int onPos1[4] = {50,130,30,150};
  int onPos2[4] = {90,90,30,150};
   int onPos3[4] = {130,50,30,150};
    int onPos4[4] = {90,90,30,150};
  Otto._moveServos(500,onPos);
    delay(200);
   Otto._moveServos(500,onPos1);
    delay(200);
    Otto._moveServos(500,onPos2);
    delay(200);
    Otto._moveServos(500,onPos3);
    delay(200);
    Otto._moveServos(500,onPos4);
    delay(200);
    Otto.home();
    delay(400); 
  }
 
void chucnang1(){
  int onPos[4] = {150,150,90,90};
  int onPos1[4] = {150,150,50,50};
  Otto._moveServos(500,onPos);
    delay(200);
    Otto._moveServos(500,onPos1);
    delay(200);
}
void chucnang2(){
  int onPos[4] = {150,150,90,90};
  int onPos1[4] = {150,150,130,130};
  Otto._moveServos(500,onPos);
    delay(400);
  Otto._moveServos(500,onPos1);
    delay(400);
}
void chucnang3(){
  int onPos[4] = {90,90,80,90};
  int onPos1[4] = {90,90,80,80};
  int onPos2[4] = {90,90,70,80};
  int onPos3[4] = {90,90,70,70};
  int onPos4[4] = {90,90,60,70};
  int onPos5[4] = {90,90,60,60};
  Otto._moveServos(500,onPos);
    delay(200);
    Otto._moveServos(500,onPos1);
    delay(200);
    Otto._moveServos(500,onPos2);
    delay(200);
    Otto._moveServos(500,onPos3);
    delay(200);
    Otto._moveServos(500,onPos4);
    delay(200);
    Otto._moveServos(500,onPos5);
    delay(200);
    Otto.home();
}
void chucnang4(){
  int onPos[4] = {90,90,100,90};
  int onPos1[4] = {90,90,100,100};
  int onPos2[4] = {90,90,110,100};
  int onPos3[4] = {90,90,110,110};
  int onPos4[4] = {90,90,120,110};
  int onPos5[4] = {90,90,120,120};
  Otto._moveServos(500,onPos);
    delay(200);
    Otto._moveServos(500,onPos1);
    delay(200);
    Otto._moveServos(500,onPos2);
    delay(200);
    Otto._moveServos(500,onPos3);
    delay(200);
    Otto._moveServos(500,onPos4);
    delay(200);
    Otto._moveServos(500,onPos5);
    delay(200);
    Otto.home();
}
void chucnang5(){
  int onPos[4] = {90,90,60,90};
  int onPos1[4] = {90,90,90,60};
  int onPos2[4] = {60,90,90,90};
  int onPos3[4] = {90,60,90,90};
  Otto._moveServos(500,onPos);
  delay(200);
  Otto.home();
  Otto._moveServos(500,onPos1);
  delay(200);
  Otto.home();
  Otto._moveServos(500,onPos2);
  delay(200);
  Otto.home();
  Otto._moveServos(500,onPos3);
  delay(200);
  Otto.home();    
}
void obstacleMode(){
      distance = Otto.getDistance();
      Serial.print("Khoang cach = ");
      Serial.println(distance);
      if(distance<15){
          Otto.sing(S_surprise); 
               Otto.walk(2,500,1); 
               //Otto.turn(3,500,1);                
             delay(50); 
        }
        else{
          //Otto.walk(2,1000,-11); 
        }
}
void dance(){
   
}
