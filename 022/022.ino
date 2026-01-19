
    int LED=2;
    int BUT=5;

void setup() {
   
     pinMode(BUT, INPUT);
     pinMode(LED, OUTPUT); 

}


void loop() {
   if (digitalRead(BUT) == 1 )
  digitalWrite(LED,HIGH);
  
  else
  digitalWrite(LED, LOW);

}
