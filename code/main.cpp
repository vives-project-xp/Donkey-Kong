#include "mbed.h"

int main() {
    // D13 is het pinslot
    DigitalOut pinslot(D13); 
    // D11 is de communicatieled
    DigitalOut ledRed(D10);

    DigitalOut actuator (D9);

    DigitalOut LedButton(D8);

    DigitalIn button(D12);
    DigitalIn microswitch(D11);
    DigitalIn magneetcontact(D7);

    bool positiveFlankButton = false;

    while (true) {

       
        // aansturen van het pinslot
        if(button == 1 && positiveFlankButton == false) 
        {
            LedButton = 1;
            ThisThread::sleep_for(25ms);
            pinslot =  !pinslot;
            positiveFlankButton = true;
        }
        if (button == 0 && positiveFlankButton == true) {
            positiveFlankButton = false;
            ThisThread::sleep_for(25ms);
        }

        // terugsturen van de sluittoestand
        if (microswitch == 0)
        {
            ledRed=1;
        }
        else
        {
            ledRed=0;    
        }

        if (microswitch == 1 && pinslot == 1) {
            actuator = 1;
        }
        else {
            actuator = 0;
        }

        if (magneetcontact == 1)
        {
            ThisThread::sleep_for(150ms);
            LedButton =  !LedButton;
        }
        else {
            LedButton=0;
        }
        
        
        
    }
}
