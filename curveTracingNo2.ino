
float r1 = 100104.0;
float r2 = 984.0;


void setup() {
  Serial.begin(9600);
  
}
 
void loop() {
  float bvc  = analogRead(A0);
  float bvb = analogRead(A2);
  float bvs = analogRead(A3);
  
  float vc = 5.0*bvc/1024.0;
  float vb = 5.0*bvb/1024.0;
  float vs = 5.0*bvs/1024.0;
  //Serial.println("============");

  Serial.print(vc);
  Serial.print(",");
  Serial.print(vb);
  Serial.print(",");
  Serial.println(vs);
  delay(500);
}
