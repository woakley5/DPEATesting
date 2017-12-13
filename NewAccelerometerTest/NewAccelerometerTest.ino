const int xInput = A0;
const int yInput = A1;
const int zInput = A2;
const int buttonPin = 2;

// Take multiple samples to reduce noise
const int sampleSize = 10;

void setup() 
{
  analogReference(EXTERNAL);
  Serial.begin(9600);
}

void loop() 
{
  int xRaw = ReadAxis(xInput);
  int yRaw = ReadAxis(yInput);
  int zRaw = ReadAxis(zInput);
  
  
   
    Serial.print(" X ");
    Serial.print(xRaw);
    Serial.print(" Y ");
    Serial.print(yRaw);
    Serial.print(" Z ");
    Serial.println(zRaw);

    if(zRaw > 500){
      //run something
    }
  
  
}

//
// Read "sampleSize" samples and report the average
//
int ReadAxis(int axisPin)
{
  long reading = 0;
  analogRead(axisPin);
  delay(1);
  for (int i = 0; i < sampleSize; i++)
  {
    reading += analogRead(axisPin);
  }
  return reading/sampleSize;
}

