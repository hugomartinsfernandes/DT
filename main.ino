#include <Arduino.h>
#include "include/timer.h"
#include "include/TM1637.h"
#include "include/RTCZero.h"

#define CLK 2 //pins definitions for TM1637 and can be changed to other ports
#define DIO 3

#define BP_Jaune 9 //pins definitions for yellow button
#define BP_Rouge 8
#define BP_Bleu 10

/// The class fsm_state is a type whose value is restricted to a 
/// subset of values
enum class fsm_state 
{
    s0, s101, s101
};

// Declaration of a variable of type fsm_state
fsm_state my_state = fsm_state::s0;



void automate()
{
    // Manage the state transitions from the state value
    switch (my_state)
    {
        case fsm_state::s0 : 

            if ( digitalRead( BP_systèmeON ) == LOW )
            {
                my_state = fsm_state::s1;
                digitalWrite(pin, High); //moteur ON
                digitalWrite(pin, High) // LED ON
            }

            break;

        case fsm_state::
    }
}

void setup()
{
    pinMode(8,INPUT_PULLUP);
    pinMode(9,INPUT_PULLUP);
    pinMode(10,INPUT_PULLUP);

    tm1637.set();
    tm1637.init();

    rtc.begin(); // initialize RTC

    // Make the function automate() being called 
    // every 1000 microseconds
    set_timer4_interrupt(10000,automate);

}




void loop()
{
    static int display_point = 0;
    static int heure = 0;
    static int minute = 0;
    delay(500);
    switch (my_state)
    {
    case fsm_state::s0:
        heure = rtc.getHours();
        minute = rtc.getMinutes();
    }


        TimeDisp[3] = minute % 10;
        TimeDisp[2] = minute / 10;
        TimeDisp[1] = heure % 10;
        TimeDisp[0] = heure / 10;

        if (display_point == 0)
        {
            tm1637.point(POINT_ON);
            display_point = 1;
        }
        else
        {
            tm1637.point(POINT_OFF);
            display_point = 0;
        }

        tm1637.display(TimeDisp);
}
