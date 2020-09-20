#define PIN_LED 7
unsigned int count;

void setup() {
  pinMode(PIN_LED, OUTPUT);
   digitalWrite(PIN_LED, 0);
  delay(1000);
  digitalWrite(PIN_LED, 1);
  count = 0 ;
}


void loop() {
  
  digitalWrite(PIN_LED, 0);
  delay(100);
  digitalWrite(PIN_LED, 1);
  delay(100);
  count += 1 ;
  if (count==5) {
    digitalWrite(PIN_LED, 1);
    while(1){} //infinite loop
    
    }
  
  
  

}
