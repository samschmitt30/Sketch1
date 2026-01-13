/*Blank LED Sketch
By Sam Schmitt 1-12-2026*/
void setup() {
 pinMode(13, OUTPUT); //set digital pin 13 to output

}

void loop() {
  digitalWrite(13, HIGH); // Turn on digital pin 13
  delay(250); //pause for 1/4 second
  digitalWrite(13, LOW); //turn off digital pin 13
  delay(250); //pause for 1/4 second
}
