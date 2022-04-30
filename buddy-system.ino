int wave = D6;
int pat = D7;


void blinkWave()
{
    for(int i = 0; i < 3; i++)
    {
        digitalWrite(wave, HIGH);
        delay(1200);
        digitalWrite(wave, LOW);
        delay(1200);
    }
}

void blinkPat()
{
    for(int i = 0; i < 5; i++)
    {
        digitalWrite(pat, HIGH);
        delay(1200);
        digitalWrite(pat, LOW);
        delay(1200);
    }
}

void handleEvents(String event, String data)
{
    if(data == "wave")
    {
        blinkWave();
    }
    else if (data == "pat")
    {
        blinkPat();
    }
}

void setup() 
{
    pinMode(wave, OUTPUT);
    pinMode(pat, OUTPUT);
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", handleEvents);
}






