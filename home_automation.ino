String inputs;
#define relay1 4 //Connect relay1 to pin 4
#define relay2 5 //Connect relay2 to pin 5
#define relay3 6 //Connect relay3 to pin 6
#define relay4 7 //Connect relay4 to pin 7
int v1=0;
int v2=0;
int v3=0;
int v4=0;

void setup()
{
Serial.begin(9600); //Set rate for communicating with phone
pinMode(relay1, OUTPUT); //Set relay1 as an output
pinMode(relay2, OUTPUT); //Set relay2 as an output
pinMode(relay3, OUTPUT); //Set relay1 as an output
pinMode(relay4, OUTPUT); //Set relay2 as an output
digitalWrite(relay1, HIGH); //Switch relay1 off
digitalWrite(relay2, HIGH); //Swtich relay2 off
digitalWrite(relay3, HIGH); //Switch relay3 off
digitalWrite(relay4, HIGH); //Swtich relay4 off
}
void loop(){
  //check whether arduino is reciving signal or not 
  while(Serial.available() == 0);
  char val = Serial.read(); //reads the signal
  Serial.print(val);

  if (val == 'Q'){
    if (v1 == 0){
      digitalWrite(relay1, LOW);
      Serial.println("turning r1 on");
      v1 = 1;}
    else{
      digitalWrite(relay1, HIGH);
      Serial.println("turning r1 off");
      v1 = 0;}}

  else if (val == 'W'){
    if (v2 == 0){
      digitalWrite(relay2, LOW);
      Serial.println("turning r2 on");
      v2 = 1;}
    else{
      digitalWrite(relay2, HIGH);
      Serial.println("turning r2 off");
      v2 = 0;}}

  else if (val == 'R'){
    if (v3 == 0){
      digitalWrite(relay3, LOW);
      Serial.println("turning r3 on");
      v3 = 1;}
    else{
      digitalWrite(relay3, HIGH);
      Serial.println("turning r3 off");
      v3 = 0;}}

   else if (val == 'T'){
    if (v4 == 0){
      digitalWrite(relay4, LOW);
      Serial.println("turning r4 on");
      v4 = 1;}
    else{
      digitalWrite(relay4, HIGH);
      Serial.println("turning r4 off");
      v4 = 0;}}
}

