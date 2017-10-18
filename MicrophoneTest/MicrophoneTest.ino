const int sampleWindow = 50; // Sample window width in mS (50 mS = 20Hz)
unsigned int sample;
const int ledPin = 13;

void setup() 
{
  pinMode(ledPin, OUTPUT);
   Serial.begin(9600);
   digitalWrite(ledPin, HIGH);
}
 
 
void loop() 
{
   /*unsigned long startMillis= millis();  // Start of sample window
   unsigned int peakToPeak = 0;   // peak-to-peak level
 
   unsigned int signalMax = 0;
   unsigned int signalMin = 1024;

   double lastHigh = 0.0;
 
   // collect data for 50 mS
   while (millis() - startMillis < sampleWindow)
   {
      sample = analogRead(0);
      if (sample < 1024)  // toss out spurious readings
      {
         if (sample > signalMax)
         {
            signalMax = sample;  // save just the max levels
         }
         else if (sample < signalMin)
         {
            signalMin = sample;  // save just the min levels
         }
      }
   }
   
   peakToPeak = signalMax - signalMin;  // max - min = peak-peak amplitude
   double volts = (peakToPeak * 5.0) / 1024;  // convert to volts*/
  int r = analogRead(0);
   //if(r > 600){
    //Serial.print("Triggered - ");
    Serial.print(r);
     Serial.print(" VALUE  ");
     Serial.print(1024);
     Serial.print(" CONSTANT ");
     Serial.println();
    //delay(150);
   //}
  
}
