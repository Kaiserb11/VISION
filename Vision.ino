
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
      



     
     //for 2nd unit  9-13
     

     
      if (state.substring(2,1) == "A") { digitalWrite(9,HIGH);}
      else
      if (state.substring(2,1) == "B"){ digitalWrite(9,HIGH);digitalWrite(10,HIGH);}
      else 
      if (state.substring(2,1) == "C"){digitalWrite(9,HIGH);digitalWrite(12,HIGH);}
      else
      if (state.substring(2,1) == "D"){digitalWrite(9,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);}
      else
      if (state.substring(2,1) == "E"){ digitalWrite(9,HIGH);digitalWrite(13,HIGH);}
      else
      if(state.substring(2,1) == "F"){digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);}
      else
      if(state.substring(2,1) == "G"){digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(13,HIGH);digitalWrite(12,HIGH);}
      else
      if (state.substring(2,1) == "I"){digitalWrite(10,HIGH);digitalWrite(12,HIGH);}
      else
      if(state.substring(2,1) == "H"){digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(13,HIGH);}
      else
      
      if(state.substring(2,1) == "J"){digitalWrite(10,HIGH);digitalWrite(13,HIGH);digitalWrite(12,HIGH);}
      else
      if(state.substring(2,1) == "K"){digitalWrite(9,HIGH);digitalWrite(11,HIGH);}
      else
      if(state.substring(2,1) == "L"){digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);}
      else
      if(state.substring(2,1) == "M"){digitalWrite(9,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);}
      else
      if(state.substring(2,1) == "N"){digitalWrite(9,HIGH);digitalWrite(11,HIGH);digitalWrite(13,HIGH);digitalWrite(12,HIGH);}
      else
      if(state.substring(2,1) == "P"){digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);}
      else
      if(state.substring(2,1) == "Q"){digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(13,HIGH);digitalWrite(12,HIGH);}
      else
      if(state.substring(2,1) == "O"){digitalWrite(9,HIGH);digitalWrite(13,HIGH);digitalWrite(11,HIGH);}
      else
      if(state.substring(2,1) == "R"){digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(13,HIGH);digitalWrite(11,HIGH);}
      else
      if(state.substring(2,1) == "S"){digitalWrite(10,HIGH);digitalWrite(12,HIGH);digitalWrite(11,HIGH);}
      else
      if(state.substring(2,1) == "T"){digitalWrite(12,HIGH);digitalWrite(10,HIGH);digitalWrite(13,HIGH);digitalWrite(11,HIGH);}
      else
      if(state.substring(2,1) == "X") {digitalWrite(9,LOW);digitalWrite(10,LOW);digitalWrite(11,LOW);digitalWrite(12,LOW);digitalWrite(13,LOW);}



     
      //3rd unit   A0-A4

      

     if (state.substring(3,2) == "N") {digitalWrite(A0, HIGH);digitalWrite(A2, HIGH);digitalWrite(A3, HIGH);digitalWrite(A4, HIGH);}
     else
     if (state.substring(3,2) == "P") {digitalWrite(A0, HIGH);digitalWrite(A1, HIGH);digitalWrite(A2, HIGH);digitalWrite(A3, HIGH);}
     else
     if (state.substring(3,2) == "G") {digitalWrite(A0, HIGH);digitalWrite(A1, HIGH);digitalWrite(A3, HIGH);digitalWrite(A4, HIGH);}
     else 
     if (state.substring(3,2) == "D") {digitalWrite(A0, HIGH);digitalWrite(A3, HIGH);digitalWrite(A4, HIGH);}
     else
     if (state.substring(3,2) == "E") {digitalWrite(A0, HIGH);digitalWrite(A4, HIGH);}
     else
     if (state.substring(3,2) == "S") {digitalWrite(A1, HIGH);digitalWrite(A2, HIGH);digitalWrite(A3, HIGH);}
     else
     if (state.substring(3,2) == "T" ){digitalWrite(A2, HIGH);digitalWrite(A1, HIGH);digitalWrite(A3, HIGH);digitalWrite(A4, HIGH);}
     else
     if (state.substring(3,2) == "A") {digitalWrite(A0, HIGH);}
     else
     if (state.substring(3,2) == "B") {digitalWrite(A0, HIGH);digitalWrite(A1, HIGH);}
     else
     if (state.substring(3,2) == "C") {digitalWrite(A0, HIGH);digitalWrite(A3, HIGH);}
     else
     if (state.substring(3,2) == "F") {digitalWrite(A0, HIGH);digitalWrite(A3, HIGH);digitalWrite(A1, HIGH);}
     else
     if (state.substring(3,2) == "H") {digitalWrite(A0, HIGH);digitalWrite(A1, HIGH);digitalWrite(A4, HIGH);}
     else
     if (state.substring(3,2) == "I") {digitalWrite(A1, HIGH);digitalWrite(A3, HIGH);}
     else
     if (state.substring(3,2) == "J") {digitalWrite(A3, HIGH);digitalWrite(A1, HIGH);}
     else
     if (state.substring(3,2) == "K") {digitalWrite(A0, HIGH);digitalWrite(A2, HIGH);}
     else
     if (state.substring(3,2) == "L") {digitalWrite(A0, HIGH);digitalWrite(A1, HIGH);digitalWrite(A2, HIGH);}
     else
     if (state.substring(3,2) == "M") {digitalWrite(A0, HIGH);digitalWrite(A2, HIGH);digitalWrite(A3, HIGH);}
     else
     if (state.substring(3,2) == "N") {digitalWrite(A0, HIGH);digitalWrite(A2, HIGH);digitalWrite(A3, HIGH);digitalWrite(A4, HIGH);}
     else
     if (state.substring(3,2) == "O") {digitalWrite(A0, HIGH);digitalWrite(A2, HIGH);digitalWrite(A4, HIGH);}
     else
     if (state.substring(3,2) == "Q") {digitalWrite(A0, HIGH);digitalWrite(A1, HIGH);digitalWrite(A3, HIGH);digitalWrite(A4, HIGH);digitalWrite(A2,HIGH);}
     else
     if (state.substring(3,2) == "R") {digitalWrite(A0, HIGH);digitalWrite(A1, HIGH);digitalWrite(A2, HIGH);digitalWrite(A4, HIGH);}
     else
     if (state.substring(3,2) == "X") {digitalWrite(A0, LOW);digitalWrite(A1, LOW);digitalWrite(A2, LOW);digitalWrite(A3, LOW);digitalWrite(A4, LOW);}
     
   

     //4th unit   20-24
     
     
     
     if (state.substring(4,3) == "A") { digitalWrite(20,HIGH);}
      else
      if (state.substring(4,3) == "B"){ digitalWrite(20,HIGH);digitalWrite(21,HIGH);}
      else 
      if (state.substring(4,3) == "C"){digitalWrite(20,HIGH);digitalWrite(23,HIGH);}
      else
      if (state.substring(4,3) == "D"){digitalWrite(20,HIGH);digitalWrite(23,HIGH);digitalWrite(24,HIGH);}
      else
      if (state.substring(4,3) == "E"){ digitalWrite(20,HIGH);digitalWrite(24,HIGH);}
      else
      if(state.substring(4,3) == "F"){digitalWrite(20,HIGH);digitalWrite(21,HIGH);digitalWrite(23,HIGH);}
      else
      if(state.substring(4,3) == "G"){digitalWrite(20,HIGH);digitalWrite(21,HIGH);digitalWrite(24,HIGH);digitalWrite(23,HIGH);}
      else
      if (state.substring(4,3) == "I"){digitalWrite(21,HIGH);digitalWrite(23,HIGH);}
      else
      if(state.substring(4,3) == "H"){digitalWrite(20,HIGH);digitalWrite(21,HIGH);digitalWrite(24,HIGH);}
      else
      
      if(state.substring(4,3) == "J"){digitalWrite(21,HIGH);digitalWrite(24,HIGH);digitalWrite(23,HIGH);}
      else
      if(state.substring(4,3) == "K"){digitalWrite(20,HIGH);digitalWrite(22,HIGH);}
      else
      if(state.substring(4,3) == "L"){digitalWrite(20,HIGH);digitalWrite(21,HIGH);digitalWrite(22,HIGH);}
      else
      if(state.substring(4,3) == "M"){digitalWrite(20,HIGH);digitalWrite(22,HIGH);digitalWrite(23,HIGH);}
      else
      if(state.substring(4,3) == "N"){digitalWrite(20,HIGH);digitalWrite(22,HIGH);digitalWrite(24,HIGH);digitalWrite(23,HIGH);}
      else
      if(state.substring(4,3) == "P"){digitalWrite(20,HIGH);digitalWrite(21,HIGH);digitalWrite(22,HIGH);digitalWrite(23,HIGH);}
      else
      if(state.substring(4,3) == "Q"){digitalWrite(20,HIGH);digitalWrite(21,HIGH);digitalWrite(22,HIGH);digitalWrite(24,HIGH);digitalWrite(23,HIGH);}
      else
      if(state.substring(4,3) == "O"){digitalWrite(20,HIGH);digitalWrite(24,HIGH);digitalWrite(22,HIGH);}
      else
      if(state.substring(4,3) == "R"){digitalWrite(20,HIGH);digitalWrite(21,HIGH);digitalWrite(24,HIGH);digitalWrite(22,HIGH);}
      else
      if(state.substring(4,3) == "S"){digitalWrite(21,HIGH);digitalWrite(23,HIGH);digitalWrite(22,HIGH);}
      else
      if(state.substring(4,3) == "T"){digitalWrite(23,HIGH);digitalWrite(21,HIGH);digitalWrite(24,HIGH);digitalWrite(22,HIGH);}
      else
      if(state.substring(4,3) == "X") {digitalWrite(20,LOW);digitalWrite(21,LOW);digitalWrite(22,LOW);digitalWrite(23,LOW);digitalWrite(24,LOW);}



     //5th unit    25-29



      if (state.substring(5,4) == "A") { digitalWrite(25,HIGH);}
      else
      if (state.substring(5,4) == "B"){ digitalWrite(25,HIGH);digitalWrite(26,HIGH);}
      else 
      if (state.substring(5,4) == "C"){digitalWrite(25,HIGH);digitalWrite(28,HIGH);}
      else
      if (state.substring(5,4) == "D"){digitalWrite(25,HIGH);digitalWrite(28,HIGH);digitalWrite(29,HIGH);}
      else
      if (state.substring(5,4) == "E"){ digitalWrite(25,HIGH);digitalWrite(29,HIGH);}
      else
      if(state.substring(5,4) == "F"){digitalWrite(25,HIGH);digitalWrite(26,HIGH);digitalWrite(28,HIGH);}
      else
      if(state.substring(5,4) == "G"){digitalWrite(25,HIGH);digitalWrite(26,HIGH);digitalWrite(29,HIGH);digitalWrite(28,HIGH);}
      else
      if (state.substring(5,4) == "I"){digitalWrite(26,HIGH);digitalWrite(28,HIGH);}
      else
      if(state.substring(5,4) == "H"){digitalWrite(25,HIGH);digitalWrite(26,HIGH);digitalWrite(29,HIGH);}
      else
      
      if(state.substring(5,4) == "J"){digitalWrite(26,HIGH);digitalWrite(29,HIGH);digitalWrite(28,HIGH);}
      else
      if(state.substring(5,4) == "K"){digitalWrite(25,HIGH);digitalWrite(27,HIGH);}
      else
      if(state.substring(5,4) == "L"){digitalWrite(25,HIGH);digitalWrite(26,HIGH);digitalWrite(27,HIGH);}
      else
      if(state.substring(5,4) == "M"){digitalWrite(25,HIGH);digitalWrite(27,HIGH);digitalWrite(28,HIGH);}
      else
      if(state.substring(5,4) == "N"){digitalWrite(25,HIGH);digitalWrite(27,HIGH);digitalWrite(29,HIGH);digitalWrite(28,HIGH);}
      else
      if(state.substring(5,4) == "P"){digitalWrite(25,HIGH);digitalWrite(26,HIGH);digitalWrite(27,HIGH);digitalWrite(28,HIGH);}
      else
      if(state.substring(5,4) == "Q"){digitalWrite(25,HIGH);digitalWrite(26,HIGH);digitalWrite(27,HIGH);digitalWrite(29,HIGH);digitalWrite(28,HIGH);}
      else
      if(state.substring(5,4) == "O"){digitalWrite(25,HIGH);digitalWrite(29,HIGH);digitalWrite(27,HIGH);}
      else
      if(state.substring(5,4) == "R"){digitalWrite(25,HIGH);digitalWrite(26,HIGH);digitalWrite(29,HIGH);digitalWrite(27,HIGH);}
      else
      if(state.substring(5,4) == "S"){digitalWrite(26,HIGH);digitalWrite(28,HIGH);digitalWrite(27,HIGH);}
      else
      if(state.substring(5,4) == "T"){digitalWrite(28,HIGH);digitalWrite(26,HIGH);digitalWrite(29,HIGH);digitalWrite(27,HIGH);}
      else
      if(state.substring(5,4) == "X") {digitalWrite(25,LOW);digitalWrite(26,LOW);digitalWrite(27,LOW);digitalWrite(28,LOW);digitalWrite(29,LOW);}




     //6th unit   30-34


         if (state.substring(6,5) == "A") { digitalWrite(30,HIGH);}
      else
      if (state.substring(6,5) == "B"){ digitalWrite(30,HIGH);digitalWrite(31,HIGH);}
      else 
      if (state.substring(6,5) == "C"){digitalWrite(30,HIGH);digitalWrite(33,HIGH);}
      else
      if (state.substring(6,5) == "D"){digitalWrite(30,HIGH);digitalWrite(33,HIGH);digitalWrite(34,HIGH);}
      else
      if (state.substring(6,5) == "E"){ digitalWrite(30,HIGH);digitalWrite(34,HIGH);}
      else
      if(state.substring(6,5) == "F"){digitalWrite(30,HIGH);digitalWrite(31,HIGH);digitalWrite(33,HIGH);}
      else
      if(state.substring(6,5) == "G"){digitalWrite(30,HIGH);digitalWrite(31,HIGH);digitalWrite(34,HIGH);digitalWrite(33,HIGH);}
      else
      if (state.substring(6,5) == "I"){digitalWrite(31,HIGH);digitalWrite(33,HIGH);}
      else
      if(state.substring(6,5) == "H"){digitalWrite(30,HIGH);digitalWrite(31,HIGH);digitalWrite(34,HIGH);}
      else
      
      if(state.substring(6,5) == "J"){digitalWrite(31,HIGH);digitalWrite(34,HIGH);digitalWrite(33,HIGH);}
      else
      if(state.substring(6,5) == "K"){digitalWrite(30,HIGH);digitalWrite(32,HIGH);}
      else
      if(state.substring(6,5) == "L"){digitalWrite(30,HIGH);digitalWrite(31,HIGH);digitalWrite(32,HIGH);}
      else
      if(state.substring(6,5) == "M"){digitalWrite(30,HIGH);digitalWrite(32,HIGH);digitalWrite(33,HIGH);}
      else
      if(state.substring(6,5) == "N"){digitalWrite(30,HIGH);digitalWrite(32,HIGH);digitalWrite(34,HIGH);digitalWrite(33,HIGH);}
      else
      if(state.substring(6,5) == "P"){digitalWrite(30,HIGH);digitalWrite(31,HIGH);digitalWrite(32,HIGH);digitalWrite(33,HIGH);}
      else
      if(state.substring(6,5) == "Q"){digitalWrite(30,HIGH);digitalWrite(31,HIGH);digitalWrite(32,HIGH);digitalWrite(34,HIGH);digitalWrite(33,HIGH);}
      else
      if(state.substring(6,5) == "O"){digitalWrite(30,HIGH);digitalWrite(34,HIGH);digitalWrite(32,HIGH);}
      else
      if(state.substring(6,5) == "R"){digitalWrite(30,HIGH);digitalWrite(31,HIGH);digitalWrite(34,HIGH);digitalWrite(32,HIGH);}
      else
      if(state.substring(6,5) == "S"){digitalWrite(31,HIGH);digitalWrite(33,HIGH);digitalWrite(32,HIGH);}
      else
      if(state.substring(6,5) == "T"){digitalWrite(33,HIGH);digitalWrite(31,HIGH);digitalWrite(34,HIGH);digitalWrite(32,HIGH);}
      else
      if(state.substring(6,5) == "X") {digitalWrite(30,LOW);digitalWrite(31,LOW);digitalWrite(32,LOW);digitalWrite(33,LOW);digitalWrite(34,LOW);}




     //7th unit 35-39



      if (state.substring(7,6) == "A") { digitalWrite(35,HIGH);}
      else
      if (state.substring(7,6) == "B"){ digitalWrite(35,HIGH);digitalWrite(36,HIGH);}
      else 
      if (state.substring(7,6) == "C"){digitalWrite(35,HIGH);digitalWrite(38,HIGH);}
      else
      if (state.substring(7,6) == "D"){digitalWrite(35,HIGH);digitalWrite(38,HIGH);digitalWrite(39,HIGH);}
      else
      if (state.substring(7,6) == "E"){ digitalWrite(35,HIGH);digitalWrite(39,HIGH);}
      else
      if(state.substring(7,6) == "F"){digitalWrite(35,HIGH);digitalWrite(36,HIGH);digitalWrite(38,HIGH);}
      else
      if(state.substring(7,6) == "G"){digitalWrite(35,HIGH);digitalWrite(36,HIGH);digitalWrite(39,HIGH);digitalWrite(38,HIGH);}
      else
      if (state.substring(7,6) == "I"){digitalWrite(36,HIGH);digitalWrite(38,HIGH);}
      else
      if(state.substring(7,6) == "H"){digitalWrite(35,HIGH);digitalWrite(36,HIGH);digitalWrite(39,HIGH);}
      else
      
      if(state.substring(7,6) == "J"){digitalWrite(36,HIGH);digitalWrite(39,HIGH);digitalWrite(38,HIGH);}
      else
      if(state.substring(7,6) == "K"){digitalWrite(35,HIGH);digitalWrite(37,HIGH);}
      else
      if(state.substring(7,6) == "L"){digitalWrite(35,HIGH);digitalWrite(36,HIGH);digitalWrite(37,HIGH);}
      else
      if(state.substring(7,6) == "M"){digitalWrite(35,HIGH);digitalWrite(37,HIGH);digitalWrite(38,HIGH);}
      else
      if(state.substring(7,6) == "N"){digitalWrite(35,HIGH);digitalWrite(37,HIGH);digitalWrite(39,HIGH);digitalWrite(38,HIGH);}
      else
      if(state.substring(7,6) == "P"){digitalWrite(30,HIGH);digitalWrite(36,HIGH);digitalWrite(37,HIGH);digitalWrite(38,HIGH);}
      else
      if(state.substring(7,6) == "Q"){digitalWrite(35,HIGH);digitalWrite(36,HIGH);digitalWrite(37,HIGH);digitalWrite(39,HIGH);digitalWrite(38,HIGH);}
      else
      if(state.substring(7,6) == "O"){digitalWrite(35,HIGH);digitalWrite(39,HIGH);digitalWrite(37,HIGH);}
      else
      if(state.substring(7,6) == "R"){digitalWrite(35,HIGH);digitalWrite(36,HIGH);digitalWrite(39,HIGH);digitalWrite(37,HIGH);}
      else
      if(state.substring(7,6) == "S"){digitalWrite(36,HIGH);digitalWrite(38,HIGH);digitalWrite(37,HIGH);}
      else
      if(state.substring(7,6) == "T"){digitalWrite(38,HIGH);digitalWrite(36,HIGH);digitalWrite(39,HIGH);digitalWrite(37,HIGH);}
      else
      if(state.substring(7,6) == "X") {digitalWrite(35,LOW);digitalWrite(36,LOW);digitalWrite(37,LOW);digitalWrite(38,LOW);digitalWrite(39,LOW);}




     //8th unit 40-44



      if (state.substring(8,7) == "A") { digitalWrite(40,HIGH);}
      else
      if (state.substring(8,7) == "B"){ digitalWrite(40,HIGH);digitalWrite(41,HIGH);}
      else 
      if (state.substring(8,7) == "C"){digitalWrite(40,HIGH);digitalWrite(43,HIGH);}
      else
      if (state.substring(8,7) == "D"){digitalWrite(40,HIGH);digitalWrite(43,HIGH);digitalWrite(44,HIGH);}
      else
      if (state.substring(8,7) == "E"){ digitalWrite(40,HIGH);digitalWrite(44,HIGH);}
      else
      if(state.substring(8,7) == "F"){digitalWrite(40,HIGH);digitalWrite(41,HIGH);digitalWrite(43,HIGH);}
      else
      if(state.substring(8,7) == "G"){digitalWrite(40,HIGH);digitalWrite(41,HIGH);digitalWrite(44,HIGH);digitalWrite(43,HIGH);}
      else
      if (state.substring(8,7) == "I"){digitalWrite(41,HIGH);digitalWrite(43,HIGH);}
      else
      if(state.substring(8,7) == "H"){digitalWrite(40,HIGH);digitalWrite(41,HIGH);digitalWrite(44,HIGH);}
      else
      
      if(state.substring(8,7) == "J"){digitalWrite(41,HIGH);digitalWrite(44,HIGH);digitalWrite(43,HIGH);}
      else
      if(state.substring(8,7) == "K"){digitalWrite(40,HIGH);digitalWrite(42,HIGH);}
      else
      if(state.substring(8,7) == "L"){digitalWrite(40,HIGH);digitalWrite(41,HIGH);digitalWrite(42,HIGH);}
      else
      if(state.substring(8,7) == "M"){digitalWrite(40,HIGH);digitalWrite(42,HIGH);digitalWrite(43,HIGH);}
      else
      if(state.substring(8,7) == "N"){digitalWrite(40,HIGH);digitalWrite(42,HIGH);digitalWrite(44,HIGH);digitalWrite(43,HIGH);}
      else
      if(state.substring(8,7) == "P"){digitalWrite(40,HIGH);digitalWrite(41,HIGH);digitalWrite(42,HIGH);digitalWrite(43,HIGH);}
      else
      if(state.substring(8,7) == "Q"){digitalWrite(40,HIGH);digitalWrite(41,HIGH);digitalWrite(42,HIGH);digitalWrite(44,HIGH);digitalWrite(43,HIGH);}
      else
      if(state.substring(8,7) == "O"){digitalWrite(40,HIGH);digitalWrite(44,HIGH);digitalWrite(42,HIGH);}
      else
      if(state.substring(8,7) == "R"){digitalWrite(40,HIGH);digitalWrite(41,HIGH);digitalWrite(44,HIGH);digitalWrite(42,HIGH);}
      else
      if(state.substring(8,7) == "S"){digitalWrite(41,HIGH);digitalWrite(43,HIGH);digitalWrite(42,HIGH);}
      else
      if(state.substring(8,7) == "T"){digitalWrite(43,HIGH);digitalWrite(41,HIGH);digitalWrite(44,HIGH);digitalWrite(42,HIGH);}
      else
      if(state.substring(8,7) == "X") {digitalWrite(40,LOW);digitalWrite(41,LOW);digitalWrite(42,LOW);digitalWrite(43,LOW);digitalWrite(44,LOW);}


     
      //9th unit  45-49



       if (state.substring(9,8) == "A") { digitalWrite(45,HIGH);}
      else
      if (state.substring(9,8) == "B"){ digitalWrite(45,HIGH);digitalWrite(46,HIGH);}
      else 
      if (state.substring(9,8) == "C"){digitalWrite(45,HIGH);digitalWrite(48,HIGH);}
      else
      if (state.substring(9,8) == "D"){digitalWrite(45,HIGH);digitalWrite(48,HIGH);digitalWrite(49,HIGH);}
      else
      if (state.substring(9,8) == "E"){ digitalWrite(45,HIGH);digitalWrite(49,HIGH);}
      else
      if(state.substring(9,8) == "F"){digitalWrite(45,HIGH);digitalWrite(46,HIGH);digitalWrite(48,HIGH);}
      else
      if(state.substring(9,8) == "G"){digitalWrite(45,HIGH);digitalWrite(46,HIGH);digitalWrite(49,HIGH);digitalWrite(48,HIGH);}
      else
      if (state.substring(9,8) == "I"){digitalWrite(46,HIGH);digitalWrite(48,HIGH);}
      else
      if(state.substring(9,8) == "H"){digitalWrite(45,HIGH);digitalWrite(46,HIGH);digitalWrite(49,HIGH);}
      else
      
      if(state.substring(9,8) == "J"){digitalWrite(46,HIGH);digitalWrite(49,HIGH);digitalWrite(48,HIGH);}
      else
      if(state.substring(9,8) == "K"){digitalWrite(45,HIGH);digitalWrite(47,HIGH);}
      else
      if(state.substring(9,8) == "L"){digitalWrite(45,HIGH);digitalWrite(46,HIGH);digitalWrite(47,HIGH);}
      else
      if(state.substring(9,8) == "M"){digitalWrite(45,HIGH);digitalWrite(47,HIGH);digitalWrite(48,HIGH);}
      else
      if(state.substring(9,8) == "N"){digitalWrite(45,HIGH);digitalWrite(47,HIGH);digitalWrite(49,HIGH);digitalWrite(48,HIGH);}
      else
      if(state.substring(9,8) == "P"){digitalWrite(40,HIGH);digitalWrite(46,HIGH);digitalWrite(47,HIGH);digitalWrite(48,HIGH);}
      else
      if(state.substring(9,8) == "Q"){digitalWrite(45,HIGH);digitalWrite(46,HIGH);digitalWrite(47,HIGH);digitalWrite(49,HIGH);digitalWrite(48,HIGH);}
      else
      if(state.substring(9,8) == "O"){digitalWrite(45,HIGH);digitalWrite(49,HIGH);digitalWrite(47,HIGH);}
      else
      if(state.substring(9,8) == "R"){digitalWrite(45,HIGH);digitalWrite(36,HIGH);digitalWrite(49,HIGH);digitalWrite(47,HIGH);}
      else
      if(state.substring(9,8) == "S"){digitalWrite(46,HIGH);digitalWrite(48,HIGH);digitalWrite(47,HIGH);}
      else
      if(state.substring(9,8) == "T"){digitalWrite(48,HIGH);digitalWrite(46,HIGH);digitalWrite(49,HIGH);digitalWrite(47,HIGH);}
      else
      if(state.substring(9,8) == "X") {digitalWrite(45,LOW);digitalWrite(46,LOW);digitalWrite(47,LOW);digitalWrite(48,LOW);digitalWrite(49,LOW);}




     //10th unit 50-A15



if (state.substring(10,7) == "A") { digitalWrite(50,HIGH);}
      else
      if (state.substring(10,9) == "B"){ digitalWrite(50,HIGH);digitalWrite(51,HIGH);}
      else 
      if (state.substring(10,9) == "C"){digitalWrite(50,HIGH);digitalWrite(53,HIGH);}
      else
      if (state.substring(10,9) == "D"){digitalWrite(50,HIGH);digitalWrite(53,HIGH);digitalWrite(A15,HIGH);}
      else
      if (state.substring(10,9) == "E"){ digitalWrite(50,HIGH);digitalWrite(54,HIGH);}
      else
      if(state.substring(10,9) == "F"){digitalWrite(50,HIGH);digitalWrite(51,HIGH);digitalWrite(53,HIGH);}
      else
      if(state.substring(10,9) == "G"){digitalWrite(50,HIGH);digitalWrite(51,HIGH);digitalWrite(A15,HIGH);digitalWrite(53,HIGH);}
      else
      if (state.substring(10,9) == "I"){digitalWrite(51,HIGH);digitalWrite(53,HIGH);}
      else
      if(state.substring(10,9) == "H"){digitalWrite(50,HIGH);digitalWrite(51,HIGH);digitalWrite(A15,HIGH);}
      else
      
      if(state.substring(10,9) == "J"){digitalWrite(51,HIGH);digitalWrite(A15,HIGH);digitalWrite(53,HIGH);}
      else
      if(state.substring(10,9) == "K"){digitalWrite(50,HIGH);digitalWrite(52,HIGH);}
      else
      if(state.substring(10,9) == "L"){digitalWrite(50,HIGH);digitalWrite(51,HIGH);digitalWrite(52,HIGH);}
      else
      if(state.substring(10,9) == "M"){digitalWrite(50,HIGH);digitalWrite(52,HIGH);digitalWrite(53,HIGH);}
      else
      if(state.substring(10,9) == "N"){digitalWrite(50,HIGH);digitalWrite(52,HIGH);digitalWrite(A15,HIGH);digitalWrite(53,HIGH);}
      else
      if(state.substring(10,9) == "P"){digitalWrite(50,HIGH);digitalWrite(51,HIGH);digitalWrite(52,HIGH);digitalWrite(53,HIGH);}
      else
      if(state.substring(10,9) == "Q"){digitalWrite(50,HIGH);digitalWrite(51,HIGH);digitalWrite(52,HIGH);digitalWrite(A15,HIGH);digitalWrite(53,HIGH);}
      else
      if(state.substring(10,9) == "O"){digitalWrite(50,HIGH);digitalWrite(A15,HIGH);digitalWrite(52,HIGH);}
      else
      if(state.substring(10,9) == "R"){digitalWrite(40,HIGH);digitalWrite(51,HIGH);digitalWrite(A15,HIGH);digitalWrite(52,HIGH);}
      else
      if(state.substring(10,9) == "S"){digitalWrite(51,HIGH);digitalWrite(53,HIGH);digitalWrite(52,HIGH);}
      else
      if(state.substring(10,9) == "T"){digitalWrite(53,HIGH);digitalWrite(51,HIGH);digitalWrite(A15,HIGH);digitalWrite(52,HIGH);}
      else
      if(state.substring(10,9) == "X") {digitalWrite(50,LOW);digitalWrite(51,LOW);digitalWrite(52,LOW);digitalWrite(53,LOW);digitalWrite(A15,LOW);}






     //11TH UNIT   A5-A9



if (state.substring(11,10) == "A") { digitalWrite(A5,HIGH);}
      else
      if (state.substring(11,10) == "B"){ digitalWrite(A5,HIGH);digitalWrite(A6,HIGH);}
      else 
      if (state.substring(11,10) == "C"){digitalWrite(A5,HIGH);digitalWrite(A8,HIGH);}
      else
      if (state.substring(11,10) == "D"){digitalWrite(A5,HIGH);digitalWrite(A8,HIGH);digitalWrite(A9,HIGH);}
      else
      if (state.substring(11,10) == "E"){ digitalWrite(A5,HIGH);digitalWrite(A9,HIGH);}
      else
      if(state.substring(11,10) == "F"){digitalWrite(A5,HIGH);digitalWrite(A6,HIGH);digitalWrite(A8,HIGH);}
      else
      if(state.substring(11,10) == "G"){digitalWrite(A5,HIGH);digitalWrite(A6,HIGH);digitalWrite(A9,HIGH);digitalWrite(A8,HIGH);}
      else
      if (state.substring(11,10) == "I"){digitalWrite(A6,HIGH);digitalWrite(A8,HIGH);}
      else
      if(state.substring(11,10) == "H"){digitalWrite(A5,HIGH);digitalWrite(A6,HIGH);digitalWrite(A9,HIGH);}
      else
      
      if(state.substring(11,10) == "J"){digitalWrite(A6,HIGH);digitalWrite(A9,HIGH);digitalWrite(A8,HIGH);}
      else
      if(state.substring(11,10) == "K"){digitalWrite(A5,HIGH);digitalWrite(A7,HIGH);}
      else
      if(state.substring(11,10) == "L"){digitalWrite(A5,HIGH);digitalWrite(A6,HIGH);digitalWrite(A7,HIGH);}
      else
      if(state.substring(11,10) == "M"){digitalWrite(A5,HIGH);digitalWrite(A7,HIGH);digitalWrite(A8,HIGH);}
      else
      if(state.substring(11,10) == "N"){digitalWrite(A5,HIGH);digitalWrite(A7,HIGH);digitalWrite(A9,HIGH);digitalWrite(A8,HIGH);}
      else
      if(state.substring(11,10) == "P"){digitalWrite(A5,HIGH);digitalWrite(A6,HIGH);digitalWrite(A7,HIGH);digitalWrite(A8,HIGH);}
      else
      if(state.substring(11,10) == "Q"){digitalWrite(A5,HIGH);digitalWrite(A6,HIGH);digitalWrite(A7,HIGH);digitalWrite(A9,HIGH);digitalWrite(A8,HIGH);}
      else
      if(state.substring(11,10) == "O"){digitalWrite(A5,HIGH);digitalWrite(A9,HIGH);digitalWrite(A7,HIGH);}
      else
      if(state.substring(11,10) == "R"){digitalWrite(A5,HIGH);digitalWrite(A6,HIGH);digitalWrite(A9,HIGH);digitalWrite(A7,HIGH);}
      else
      if(state.substring(11,10) == "S"){digitalWrite(A6,HIGH);digitalWrite(A8,HIGH);digitalWrite(A7,HIGH);}
      else
      if(state.substring(11,10) == "T"){digitalWrite(A8,HIGH);digitalWrite(A6,HIGH);digitalWrite(A9,HIGH);digitalWrite(A7,HIGH);}
      else
      if(state.substring(11,10) == "X") {digitalWrite(A5,LOW);digitalWrite(A6,LOW);digitalWrite(A7,LOW);digitalWrite(A8,LOW);digitalWrite(A9,LOW);}




    //12TH UNIT   A10-A14




    if (state.substring(12,11) == "A") { digitalWrite(A10,HIGH);}
      else
      if (state.substring(12,11) == "B"){ digitalWrite(A10,HIGH);digitalWrite(A11,HIGH);}
      else 
      if (state.substring(12,11) == "C"){digitalWrite(A10,HIGH);digitalWrite(A13,HIGH);}
      else
      if (state.substring(12,11) == "D"){digitalWrite(A10,HIGH);digitalWrite(A13,HIGH);digitalWrite(A14,HIGH);}
      else
      if (state.substring(12,11) == "E"){ digitalWrite(A10,HIGH);digitalWrite(A14,HIGH);}
      else
      if(state.substring(12,11) == "F"){digitalWrite(A10,HIGH);digitalWrite(A11,HIGH);digitalWrite(A13,HIGH);}
      else
      if(state.substring(12,11) == "G"){digitalWrite(A10,HIGH);digitalWrite(A11,HIGH);digitalWrite(A14,HIGH);digitalWrite(A13,HIGH);}
      else
      if (state.substring(12,11) == "I"){digitalWrite(A11,HIGH);digitalWrite(A13,HIGH);}
      else
      if(state.substring(12,11) == "H"){digitalWrite(A10,HIGH);digitalWrite(A11,HIGH);digitalWrite(A14,HIGH);}
      else
      
      if(state.substring(12,11) == "J"){digitalWrite(A11,HIGH);digitalWrite(A14,HIGH);digitalWrite(A13,HIGH);}
      else
      if(state.substring(12,11) == "K"){digitalWrite(A10,HIGH);digitalWrite(A12,HIGH);}
      else
      if(state.substring(12,11) == "L"){digitalWrite(A10,HIGH);digitalWrite(A11,HIGH);digitalWrite(A12,HIGH);}
      else
      if(state.substring(12,11) == "M"){digitalWrite(A10,HIGH);digitalWrite(A12,HIGH);digitalWrite(A13,HIGH);}
      else
      if(state.substring(12,11) == "N"){digitalWrite(A10,HIGH);digitalWrite(A12,HIGH);digitalWrite(A14,HIGH);digitalWrite(A13,HIGH);}
      else
      if(state.substring(12,11) == "P"){digitalWrite(A10,HIGH);digitalWrite(A11,HIGH);digitalWrite(A12,HIGH);digitalWrite(A13,HIGH);}
      else
      if(state.substring(12,11) == "Q"){digitalWrite(A10,HIGH);digitalWrite(A11,HIGH);digitalWrite(42,HIGH);digitalWrite(A14,HIGH);digitalWrite(A13,HIGH);}
      else
      if(state.substring(12,11) == "O"){digitalWrite(A10,HIGH);digitalWrite(A14,HIGH);digitalWrite(A12,HIGH);}
      else
      if(state.substring(12,11) == "R"){digitalWrite(A10,HIGH);digitalWrite(A11,HIGH);digitalWrite(A14,HIGH);digitalWrite(A12,HIGH);}
      else
      if(state.substring(12,11) == "S"){digitalWrite(A11,HIGH);digitalWrite(A13,HIGH);digitalWrite(A12,HIGH);}
      else
      if(state.substring(12,11) == "T"){digitalWrite(A13,HIGH);digitalWrite(A11,HIGH);digitalWrite(A14,HIGH);digitalWrite(A12,HIGH);}
      else
      if(state.substring(12,11) == "X") {digitalWrite(A10,LOW);digitalWrite(A11,LOW);digitalWrite(A12,LOW);digitalWrite(A13,LOW);digitalWrite(A14,LOW);}

     else
     
     //refreshable


     if (state.substring(1,0) == "["){
  digitalWrite(3,HIGH);digitalWrite(6,HIGH);
    digitalWrite(9,HIGH);digitalWrite(A2, HIGH);digitalWrite(A1, HIGH);digitalWrite(A3, HIGH);digitalWrite(A4, HIGH); //CAT on display
 }else
 if (state.substring(1,0) == "/"){
  digitalWrite(3,LOW);digitalWrite(4,LOW);digitalWrite(5,LOW);digitalWrite(6,LOW);digitalWrite(7,LOW);
  digitalWrite(9,LOW);digitalWrite(10,LOW);digitalWrite(11,LOW);digitalWrite(12,LOW);digitalWrite(13,LOW);
  digitalWrite(A0, LOW);digitalWrite(A1, LOW);digitalWrite(A2, LOW);digitalWrite(A3, LOW);digitalWrite(A4, LOW);
 }else
 if (state.substring(1,0) == "]"){
  digitalWrite(3,HIGH);digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(9,HIGH);digitalWrite(13,HIGH);digitalWrite(11,HIGH);  // DOG on display
  digitalWrite(A0, HIGH);digitalWrite(A1, HIGH);digitalWrite(A3, HIGH);digitalWrite(A4, HIGH); 
 }else
 if (state.substring(1,0) == ";"){
  digitalWrite(3,HIGH);digitalWrite(4,HIGH);digitalWrite(6,HIGH);digitalWrite(7,HIGH);
  digitalWrite(9,HIGH);digitalWrite(13,HIGH);digitalWrite(11,HIGH);digitalWrite(A0, HIGH);digitalWrite(A3, HIGH);digitalWrite(A4, HIGH); //GOD on display
 }else
 
 
 if (state.substring(1,0) == "'"){
  digitalWrite(4,HIGH);digitalWrite(5,HIGH);digitalWrite(6,HIGH);digitalWrite(9,HIGH);digitalWrite(A2, HIGH);digitalWrite(A1, HIGH);digitalWrite(A3, HIGH);digitalWrite(A4, HIGH);} //SAD on display
 }}
     
      
      
     
      
      
      




