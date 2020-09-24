const int ledPin=3;
const int totalStates=10;
int ledState[totalStates];
int ledDuration[totalStates]={500,800,200,1000,700,300,400,600,400,300};

void setup(){
	pinMode(ledPin,OUTPUT);
	Serial.begin(9600);
	while(!Serial){
		;
	}
	Serial.println("Please enter 10 Led States.. ");
	Serial.println();
	for(int i=0;i<totalStates;i++){
		Serial.print(i);
		Serial.print(". Please type 0 or 1 for LED state: ");
	
	while(Serial.available()==0){

	}
	char userInput=Serial.read();
	if(userInput=='0')
		ledState[i]=0;
	else if(userInput=='1')
		ledState[i]=1;
	else
		ledState[i]=1;
	Serial.println(ledState[i]);
}
	Serial.println();
	Serial.println("Thank you for your input, let`s blink this LED..");
	Serial.println();
	for(int i=0;i<totalStates;i++){
	Serial.print(i);
	Serial.print(". You have entered: ");
	Serial.print(ledState[i]);
	Serial.print(" with duration: ");
	Serial.print(ledDuration[i]);
	Serial.println();
	}
}
void loop(){
	for(int i=0;i<totalStates;i++){
		digitalWrite(ledPin,ledState[i]);
		delay(ledDuration[i]);
	}

}