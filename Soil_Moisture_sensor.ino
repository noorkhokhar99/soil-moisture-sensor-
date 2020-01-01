


int sensor_pin = A8;

int output_value ;

void setup() {

   Serial.begin(9600);

   Serial.println("Reading From the Sensor ...");

   delay(2000);

   }

void loop() {

   output_value= analogRead(sensor_pin);

   output_value = map(output_value,1023,160,0,100);

   Serial.print("Moisture : ");

   Serial.print(output_value);

   Serial.print("%");

   Serial.println();

   delay(1000);

   }
