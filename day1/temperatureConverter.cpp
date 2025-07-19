#include <iostream>
using namespace std;

int main() {
    float temp;
    int choice;

    cout << "Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit and Kelvin" << endl;
    cout << "2. Fahrenheit to Celsius and Kelvin" << endl;
    cout << "3. Kelvin to Celsius and Fahrenheit" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        cout << "Fahrenheit: " << (temp * 9 / 5) + 32 << endl;
        cout << "Kelvin: " << temp + 273.15 << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        cout << "Celsius: " << (temp - 32) * 5 / 9 << endl;
        cout << "Kelvin: " << ((temp - 32) * 5 / 9) + 273.15 << endl;
    } else if (choice == 3) {
        cout << "Enter temperature in Kelvin: ";
        cin >> temp;
        cout << "Celsius: " << temp - 273.15 << endl;
        cout << "Fahrenheit: " << ((temp - 273.15) * 9 / 5) + 32 << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
