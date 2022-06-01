int drei_led_rot = 6;
int drei_led_gruen = 5;
int drei_led_blau = 3;
int led_rot = 8;
int led_gruen = 12;
int led_blau = 13;
int licht = 150;
int dunkel = 0;
int drei_led_rot_value;
int drei_led_gruen_value;
int drei_led_blau_value;
int led_rot_value;
int led_gruen_value;
int led_blau_value;

void setup() {
  Serial.begin(9600);
  pinMode(drei_led_rot,OUTPUT);
  pinMode(drei_led_gruen,OUTPUT);
  pinMode(drei_led_blau, OUTPUT);
  pinMode(led_rot, OUTPUT);
  pinMode(led_gruen, OUTPUT);
  pinMode(led_blau, OUTPUT);
}

void loop() {
  digitalWrite(led_rot, LOW);
  digitalWrite(led_gruen, LOW);
  digitalWrite(led_blau, LOW);

  drei_led_rot_value = analogRead(drei_led_rot);
  drei_led_gruen_value = analogRead(drei_led_gruen);
  drei_led_blau_value = analogRead(drei_led_blau);
  led_rot_value = analogRead(led_rot);
  led_gruen_value = analogRead(led_gruen);
  led_blau_value = analogRead(led_blau);
  
  Serial.print("Drei_LED_Rot  ");
  Serial.print("LED_Rot  | ");
  Serial.print("Drei_LED_Gruen  ");
  Serial.print("LED_Gruen  | ");
  Serial.print("Drei_LED_Blau  ");
  Serial.print(" LED_Blau  ");
  Serial.println();
  Serial.print(drei_led_rot_value);
  Serial.print("           ");
  Serial.print(led_rot_value);
  Serial.print("      | ");
  Serial.print(drei_led_gruen_value);
  Serial.print("             ");
  Serial.print(led_gruen_value);
  Serial.print("        | ");
  Serial.print(drei_led_blau_value);
  Serial.print("             ");
  Serial.print(led_blau_value);
  Serial.println();
  delay(100);
  
  
  analogWrite(drei_led_rot, licht);
  analogWrite(led_rot, drei_led_rot_value);
  delay(2000);
  analogWrite(drei_led_rot, dunkel);
  analogWrite(led_rot, dunkel);
  delay(1000);
  
  analogWrite(drei_led_gruen, licht);
  analogWrite(led_gruen, drei_led_gruen_value);
  delay(2000);
  analogWrite(drei_led_gruen, dunkel);
  analogWrite(led_gruen, dunkel);
  delay(1000);

  analogWrite(drei_led_blau, licht);
  analogWrite(led_blau, drei_led_blau_value);
  delay(2000);
  analogWrite(drei_led_blau, dunkel);
  analogWrite(led_blau, dunkel);
  delay(1000);
}
