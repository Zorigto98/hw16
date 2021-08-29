#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    stringstream expression;
    string temp;
    cout << "Input expression" << endl;
    cin >> temp;

    char sign;
    double num1, num2;

    expression << temp;

    expression >> num1 >> sign >> num2;

    double result;
    if (sign=='+')
    {
        result=num1+num2;
    }
    else if (sign=='-')
    {
        result=num1-num2;
    }
    else if (sign=='*')
    {
        result=num1*num2;
    }
    else if (sign=='/')
    {
        result=num1/num2;
    }

    cout << num1 << sign << num2 << "=" << result << endl;
}
