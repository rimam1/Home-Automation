// Home Automation
// I am using digital Pin no. 6 for bulb and Pin no.5 for fan
// download an apk in your android phone from playstore : https://play.google.com/store/apps/details?id=com.keuwl.arduinobluetooth
// I have used bluetooth HC-05 module, Arduino UNO, 2 channel Relay Module

char bt;

void setup()
{

    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);

    Serial.begin(9600);
}

void loop()
{

    if (Serial.available() > 0)
    {

        bt = Serial.read();

        Serial.println(bt);
        {
            if (bt == 'a')
                digitalWrite(5, HIGH);
            else if (bt == 'b')
                digitalWrite(5, LOW);
            else if (bt == 'c')
                digitalWrite(6, HIGH);
            else if (bt == 'd')
                ditialWrite(6, LOW); 
        }
    }
}
