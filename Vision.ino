
 String state;  
     

void setup() {
 
 pinMode(3, OUTPUT); pinMode(13, OUTPUT); pinMode(14, OUTPUT); pinMode(15, OUTPUT);  
 pinMode(4, OUTPUT);  pinMode(18, OUTPUT); pinMode(19, OUTPUT); pinMode(16, OUTPUT); 
 pinMode(5, OUTPUT); pinMode(21, OUTPUT); pinMode(20, OUTPUT); pinMode(17, OUTPUT);  
 pinMode(6, OUTPUT);  pinMode(22, OUTPUT); pinMode(23, OUTPUT); pinMode(24, OUTPUT); 
 pinMode(7, OUTPUT);  pinMode(27, OUTPUT); pinMode(26, OUTPUT); pinMode(25, OUTPUT);
 pinMode(8, OUTPUT);pinMode(28, OUTPUT); pinMode(31, OUTPUT); pinMode(32, OUTPUT); 
 pinMode(9, OUTPUT);pinMode(29, OUTPUT); pinMode(34, OUTPUT); pinMode(33, OUTPUT); 
 pinMode(10, OUTPUT);pinMode(30, OUTPUT); pinMode(35, OUTPUT); pinMode(36, OUTPUT); 
 pinMode(11, OUTPUT);pinMode(39, OUTPUT); pinMode(38, OUTPUT); pinMode(37, OUTPUT); 
 pinMode(12, OUTPUT);pinMode(40, OUTPUT); pinMode(41, OUTPUT); pinMode(42, OUTPUT); 
 pinMode(LED_BUILTIN, OUTPUT);pinMode(45, OUTPUT); pinMode(44, OUTPUT); pinMode(43, OUTPUT); 
 pinMode(A0, OUTPUT);pinMode(46, OUTPUT); pinMode(47, OUTPUT); pinMode(48, OUTPUT); pinMode(49, OUTPUT); 
 pinMode(A1, OUTPUT);pinMode(A6, OUTPUT); pinMode(52, OUTPUT); pinMode(53, OUTPUT); pinMode(50, OUTPUT); 
 pinMode(A2, OUTPUT);pinMode(A7, OUTPUT); pinMode(A8, OUTPUT); pinMode(A9, OUTPUT); pinMode(A10, OUTPUT); 
 pinMode(A3, OUTPUT);pinMode(A14, OUTPUT); pinMode(A13, OUTPUT); pinMode(A12, OUTPUT); pinMode(A11, OUTPUT); 
 pinMode(A4, OUTPUT);pinMode(A15, OUTPUT); pinMode(51, OUTPUT);
 pinMode(A5, OUTPUT); 
 Serial.begin(9600);
 
}

void loop() { 
if(Serial.available()>0){

state = Serial.readString();
Serial.println(state);
      
      
      //1st unit 4-8

      
       if (state.substring(1,0) == "A") {digitalWrite(4,HIGH);}
      else
      if (state.substring(1,0) =="B"){digitalWrite(4,HIGH);digitalWrite(5,HIGH);}
      else
      if (state.substring(1,0) =="C"){digitalWrite(4,HIGH);digitalWrite(7,HIGH);}
      else
      if (state.substring(1,0) == "D"){ digitalWrite(4,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);}
      else
      if (state.substring(1,0) == "F"){digitalWrite(4,HIGH);digitalWrite(7,HIGH);digitalWrite(5,HIGH); }
      else
      if(state.substring(1,0) == "G"){digitalWrite(4,HIGH);digitalWrite(5,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);}
      else
      if(state.substring(1,0) =="H"){digitalWrite(4,HIGH);digitalWrite(5,HIGH);digitalWrite(8,HIGH);}
      else
      if (state.substring(1,0) =="I"){digitalWrite(5,HIGH);digitalWrite(7,HIGH);}
      else
      if(state.substring(1,0) =="J"){digitalWrite(5,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);}
      else
      if(state.substring(1,0) =="O"){digitalWrite(4,HIGH);digitalWrite(8,HIGH);digitalWrite(6,HIGH);}
      else
      if(state.substring(1,0) =="S"){digitalWrite(5,HIGH);digitalWrite(6,HIGH);digitalWrite(7,HIGH);}
      else
      if(state.substring(1,0) =="T"){digitalWrite(6,HIGH);digitalWrite(5,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);}
      else
      if(state.substring(1,0) =="E"){digitalWrite(4,HIGH);digitalWrite(8,HIGH);}
      else
      if(state.substring(1,0) =="K"){digitalWrite(6,HIGH);digitalWrite(4,HIGH);}
      else
      if(state.substring(1,0) =="L"){digitalWrite(6,HIGH);digitalWrite(5,HIGH);digitalWrite(4,HIGH);}
      else
      if(state.substring(1,0) =="M"){digitalWrite(6,HIGH);digitalWrite(4,HIGH);digitalWrite(7,HIGH);}
      else
      if(state.substring(1,0) =="N"){digitalWrite(6,HIGH);digitalWrite(4,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);}
      else
      if(state.substring(1,0) =="P"){digitalWrite(6,HIGH);digitalWrite(5,HIGH);digitalWrite(7,HIGH);digitalWrite(4,HIGH);}
      else
      if(state.substring(1,0) =="Q"){digitalWrite(6,HIGH);digitalWrite(5,HIGH);digitalWrite(7,HIGH);digitalWrite(4,HIGH);digitalWrite(8,HIGH);}
      else
      if(state.substring(1,0) =="R"){digitalWrite(5,HIGH);digitalWrite(5,HIGH);digitalWrite(4,HIGH);digitalWrite(8,HIGH);}
      else
      if(state.substring(1,0) =="X"){digitalWrite(4,LOW);digitalWrite(5,LOW);digitalWrite(6,LOW);digitalWrite(7,LOW);digitalWrite(8,LOW);}
      



     
     
      
      
     
      
      
      




