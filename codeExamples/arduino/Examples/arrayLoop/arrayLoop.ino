const int arraySize = 6;
int seq[arraySize]={1,1,1,0,1,0};
int counter = 0;
const int led = 2;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
Serial.println(seq[counter]);

if(seq[counter] == 1){
  digitalWrite(led,HIGH);
}else{
 digitalWrite(led,LOW); 
}
delay(1000);

counter = counter + 1; 


if (counter >= arraySize){
  counter = 0;
  Serial.println("Counter Reset");
}

}
