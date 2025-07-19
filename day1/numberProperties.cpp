#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;

    if(num > 0)
        cout << "Positive" << endl;
    else if(num < 0)
        cout << "Negative" << endl;
    else
        cout << "Zero" << endl;

    int absNum = abs(num);
    if(absNum < 10)
        cout << "Single digit" << endl;
    else if(absNum < 100)
        cout << "Double digit" << endl;
    else
        cout << "More than two digits" << endl;

    return 0;
}
