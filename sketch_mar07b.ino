#include <Sparki.h> 
//If there is an obstacle in front of the sparkle, it will be a wall,
// If there is an obstacle in side of the sparkle, it will be a flower.
//this code is written for flower pruning.
// Göksu Begüm Bingöl, Bilgesu Bük

int count=0;

void setup() {
sparki.servo(0);
//we assume gripper open
}

void loop() {
  int lineCenter   = sparki.lineCenter();
  if(lineCenter<700){// gri zemin icin
    sparki.moveStop();
    delay(6000);
        
  }else{ //beyaz zemin
		sparki.clearLCD(); // wipe the screen
        sparki.moveForward(); 
        if(count%2==1){//sağa bak
          sparki.servo(80);
        }
        else{//sola bak
           sparki.servo(-80);
        }
        delay(200);
        sparki.moveStop();// yana bakıp durması pingi dogru almak icin
        delay(100);
         int yan = sparki.ping(); //cicekler icin 
         if(yan < 25) //ciceklere gitme
          { 
            if(count%2==1)//cicekleri bulmak icin bazen saga bazen sola bakmassı icin
                sagaHareket();
            else{
                solaHareket();
            }
          }
          sparki.servo(0);
          delay(200);
          int center = sparki.ping(); //duvarı bulmak icin    
          if(center<18){//duvara bak
              if(count%2==0){//duvarı görünce bazen sola bazen saga bakması icin	
                sparki.moveLeft(90);
                sparki.moveForward(40);  
                sparki.moveLeft(90);
                count++;
              }else{
                sparki.moveRight(90);
                sparki.moveForward(40);  
                sparki.moveRight(90);
                count++;
                
              }
          }
  
  sparki.print("Yan: "); // show left line sensor on screen
  sparki.println(yan);
  sparki.print("Center: "); // show left line sensor on screen
  sparki.println(center);
  sparki.print("count: "); // show left line sensor on screen
  sparki.println(count);
  }

  sparki.println(lineCenter);
  sparki.updateLCD(); // display all of the information written to the screen

  
  delay(100); // wait 0.1 seconds
}void solaHareket(){
		sparki.moveForward(3);//cicegi bulduktan sonra 3 cm ilerler
        sparki.moveLeft(90);
		sparki.moveStop();
		delay(2000);
		sparki.servo(2);//servonun tam dönmesi icin
		delay(2000);
		int sayi=0;
		
		while( int c=sparki.ping() < 25&&sayi<5)//engel varken kapat aç 5 kere tekrarla hala kesemediysen vazgec 
		{
		  sparki.clearLCD();
		  sparki.moveForward(5);
		  sparki.gripperClose(9);
		  delay(6000);
		  sparki.gripperOpen(5);
		  delay(5000);
		  sparki.println(c);
		  sparki.updateLCD();
		  sparki.moveBackward(5);
		  sayi=sayi+1;   
		}
		sparki.moveRight(90);
	  
}void sagaHareket(){
		sparki.moveForward(3);
		sparki.moveRight(90);
		sparki.moveStop();
		delay(2000);
		sparki.servo(2);
		delay(2000);
		int sayi=0;
		while( int c=sparki.ping() < 25&&sayi<5)//engel varken kapat aç
		{
		  sparki.clearLCD(); 
			sparki.moveForward(5);
		  sparki.gripperClose(9);
		  delay(6000);
		  sparki.gripperOpen(5);
		  delay(5000);
		  sparki.println(c);
		  sparki.updateLCD(); 
		  sparki.moveBackward(5
		  );
		   sayi=sayi+1;   
		}
		sparki.moveLeft(90);
          
}

