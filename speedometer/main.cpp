#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

bool compare (float value, float epsulon)
{
    return (value <= 0+epsulon);
}
int main() {
    float speed=0;
    bool stop=false;

    while (!stop)
    {
        float delta;
        cout << "Input delta speed " << endl;
        cin >> delta;
        if (speed+delta>150) speed=150;
        else speed += delta;

        if (compare(speed, 0.01))
        {
            stop=true;
            speed=0;
        }

        cout << "Current speed: " << fixed << setprecision(1) << speed << endl;
    }
}
