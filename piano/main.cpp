#include <iostream>
#include <string>

using namespace std;

enum notes
{
  DO = 1 << 0,
  RE = 1 << 1,
  MI = 1 << 2,
  FA = 1 << 3,
  SOL = 1 << 4,
  LA = 1 << 5,
  SI = 1 << 6
};

void piano_Play (int ch)
{
    int sound = 1 << ch;

    if (sound & DO) cout << "DO ";
    else if (sound & RE) cout << "RE ";
    else if (sound & MI) cout << "MI ";
    else if (sound & FA) cout << "FA ";
    else if (sound & SOL) cout << "SOL ";
    else if (sound & LA) cout << "LA ";
    else if (sound & SI) cout << "SI ";
}

int main() {
    string notes_line;
    string temp;
    int combination=12;
    cout << "Input " << combination << " notes combination" << endl;

    int i=1;
    while (i!=combination+1)
    {
        bool checkInput=true;
        cout << "Input " << i << " notes line" << endl;
        cin >> temp;
        for (int j=0; j<temp.length(); j++)
        {
            if (temp[j] < '1' || temp[j] > '7')
            {
                cout << "Incorrect input. Try again" << endl;
                checkInput=false;
                break;
            }
        }
        if (checkInput)
        {
            notes_line+=temp;
            i++;
        }
    }


    for (int i=0; i<notes_line.length(); i++)
    {
        piano_Play(notes_line[i] - '1');
    }
}
