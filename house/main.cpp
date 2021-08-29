#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int automatics=0;

enum smartHouse
{
    POWER_SUPPLY = 1 << 0,
    SOCKET = 1 << 1,
    LIGHT_INSIDE = 1 << 2,
    LIGHT_OUTSIDE = 1 << 3,
    HOUSE_HEATING = 1 << 4,
    WATER_HEATING = 1 << 5,
    CONDITIONER = 1 << 6
};

void checkTempOutside (float temperature)
{
    if ((temperature<0) && (WATER_HEATING != (automatics & WATER_HEATING)))
    {
        automatics |= WATER_HEATING;
        cout << "Water heating ON" << endl;
    }
    else if ((temperature>5) && (WATER_HEATING == (automatics & WATER_HEATING)))
    {
        automatics &= ~WATER_HEATING;
        cout << "Water heating OFF" << endl;
    }
}

void checkLightOutside (int time, bool movement)
{
    if (((time<5 || time>16) && movement) && (LIGHT_OUTSIDE != (automatics & LIGHT_OUTSIDE)))
    {
        automatics |= LIGHT_OUTSIDE;
        cout << "Outside light ON" << endl;
    }
    else if (((time>=5 && time<=16) || !movement) && (LIGHT_OUTSIDE == (automatics & LIGHT_OUTSIDE)))
    {
        automatics &= ~LIGHT_OUTSIDE;
        cout << "Outside light OFF" << endl;
    }
}

void checkTempInside (float temperature)
{
    if ((temperature < 22) && (HOUSE_HEATING != (automatics & HOUSE_HEATING)))
    {
        automatics |= HOUSE_HEATING;
        cout << "House heating ON" << endl;
    }
    else if ((temperature >= 25) && (HOUSE_HEATING == (automatics & HOUSE_HEATING)))
    {
        automatics &= ~HOUSE_HEATING;
        cout << "House heating OFF" << endl;
    }
}

void checkConditioner (float temperature)
{
    if ((temperature >= 30) && (CONDITIONER != (automatics & CONDITIONER)))
    {
        automatics |= CONDITIONER;
        cout << "Conditioner ON" << endl;
    }
    else if ((temperature <= 25) && (CONDITIONER == (automatics & CONDITIONER)))
    {
        automatics &= ~CONDITIONER;
        cout << "Conditioner OFF" << endl;
    }
}

void checkLightTemperature (int time)
{
    /* (5000-2700)/4=575
     * 575 измененение цветовой температуры за один час
     */

    int lightColor=2700;

    if (time>=0 && time <=15)
    {
        lightColor=5000;
    }
    else if (time>15 && time <20)
    {
        lightColor+=(20-time)*575;
    }

    cout << "Light temperature in a house " << lightColor << "K " << endl;
}

void checkLightInside (bool light)
{
    if ((light) && (LIGHT_INSIDE != (automatics & LIGHT_INSIDE)))
    {
        automatics |= LIGHT_INSIDE;
        cout << "Light in house ON" << endl;
    }
    else if ((!light) && LIGHT_INSIDE == (automatics & LIGHT_INSIDE))
    {
        automatics &= ~LIGHT_INSIDE;
        cout << "Light in house OFF" << endl;
    }
}

bool checkMovement (string movement)
{
    if (movement=="yes") return true;
}

bool checkLightOn (string light)
{
    if (light=="on") return true;
}

void time (int i)
{
    cout << endl << "Current time: ";
    if (i<10) cout << "0" << i << ":00" << endl;
    else cout << i << ":00" << endl << endl;
}

int main() {
    /*датчики:
     * температуры снаружи
     * температуры внутри
     * движения снаружи
     * света внутри дома (вкл/выкл)
     */

    float temperatureOutside, temperatureInside;
    bool light, movement;

    for (int i=14; i<48; i++)
    {
        time(i%24);

        cout << "Input temperature inside and outside house. " << endl;
        cout << "Outside movement(yes/no). Light in house(on/off)" << endl;

        stringstream value;
        string temp, movementStr, lightStr;
        getline (cin , temp);

        value << temp;

        value >> temperatureInside >> temperatureOutside >> movementStr >> lightStr;

        light=checkLightOn(lightStr);
        movement=checkMovement(movementStr);

        checkTempOutside(temperatureOutside);
        checkLightOutside(i%24, movement);
        checkTempInside(temperatureInside);
        checkConditioner(temperatureInside);
        checkLightInside(light);
        if (light) checkLightTemperature(i%24);
    }
}