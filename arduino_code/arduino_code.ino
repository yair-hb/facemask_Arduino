int led1 =7;
int led2 =5;
int option;

void setup(){
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
 }

void loop (){
  if (Serial.available()>0){
    option = Serial.read();
    Serial.println(option);
    if (option == 'P'){
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
    }
    if (option == 'N'){
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
    }
  }
}
