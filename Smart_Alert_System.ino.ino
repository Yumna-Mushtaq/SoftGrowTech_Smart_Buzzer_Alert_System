/* * SoftGrow Tech IoT Internship - Task 1
 * Smart Proximity Alert System
 */

const int trigPin = 9;    // Trigger pin for the sensor
const int echoPin = 10;   // Echo pin for the sensor
const int buzzerPin = 8;  // Output pin for the buzzer

void setup() {
  Serial.begin(9600);           // Start serial communication
  pinMode(trigPin, OUTPUT);     // Set trigPin as an Output
  pinMode(echoPin, INPUT);      // Set echoPin as an Input
  pinMode(buzzerPin, OUTPUT);   // Set buzzerPin as an Output
}

void loop() {
  // Clearing the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Sending the ultrasonic pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Calculating the distance
  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;

  // Print distance for debugging
  Serial.print("Distance: ");
  Serial.println(distance);

  // Alert logic (Buzzer turns on if distance is less than 30cm)
  if (distance > 0 && distance < 30) {
    tone(buzzerPin, 1000); 
  } else {
    noTone(buzzerPin);
  }
  delay(100);
}