

// void setup()
// {

//   // initialize digital pin LED_BUILTIN as an output.
//   pinMode(LED_BUILTIN, OUTPUT);
// };

// // the loop function runs over and over again forever
// void loop()
// {

//   digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
//   delay(1000);                     // wait for a second
//   digitalWrite(LED_BUILTIN, LOW);  // turn the LED off by making the voltage LOW
//   delay(1000);
//   digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
//   delay(3000);                     // wait for a second
//   digitalWrite(LED_BUILTIN, LOW);  // turn the LED off by making the voltage LOW
//   delay(1000);

// };

const int bP = 2;
const int DigO = 0;
void setup()
{
  // put your setup code here, to run once:
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600); // set serial comm with 9600 bauds. If digital
  // comm. Only 0,1... baud = bit/s
  pinMode(bP, INPUT);  // set pin bP to input
  pinMode(13, OUTPUT); // set pin 13 to input
  pinMode(4, INPUT);
  pinMode(12, OUTPUT);
}
void loop()
{
  // put your main code here, to run repeatedly:
  if (digitalRead(4) == HIGH)
  {
    Serial.println("1  H"); // Al final agrega un newline
    // Serial.write('H'); //Requiere el newline
    Serial.write('\n');
    digitalWrite(12, HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(12, LOW);
    Serial.println("0 L");
    // Serial.write('L');
    // Serial.write('\n');
    delay(1000);
  }
}
