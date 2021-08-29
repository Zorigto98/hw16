#include <iostream>
#include <string>

using namespace std;

int main() {
    string integer="";
    string fractional="";
    string result="";
    cout << "Input integer part " << endl;
    cin >> integer;
    cout << "Input fractional part " << endl;
    cin >> fractional;
    result=integer + '.' + fractional;
    cout << "You're number: " << stod(result);
}
