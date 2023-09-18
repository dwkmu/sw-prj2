#define PIN_LED 7
unsigned int count;
bool toggle = 0;

void setup() {
  // put your setup code here, to run once:
  count = 0 ;
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_LED,0);
  delay(1000);
}


void loop() {
  // put your main code here, to run repeatedly:
  while(count<11){
  count++;
  
  toggle = 1 - toggle;
  digitalWrite(PIN_LED, toggle);
  
  delay(100);
}
  while(1){
    
  }
}
