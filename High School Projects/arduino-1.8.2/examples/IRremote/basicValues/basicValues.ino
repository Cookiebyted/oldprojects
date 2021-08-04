#include <IRremote.h>
int RECV_PIN = 2; //define input pin on Arduino
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
Serial.begin(9600);
irrecv.enableIRIn(); // Start the receiver
}
void loop() {
if (irrecv.decode(&results)) {
 Serial.println(results.value, HEX); // hex Value of the Key
 Serial.println(results.actualKey); // desc of key
 irrecv.resume(); // Receive the next value
}
}

