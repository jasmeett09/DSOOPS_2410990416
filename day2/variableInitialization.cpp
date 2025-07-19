#include <iostream>
using namespace std;

int main() {
    // Copy Initialization
    int a = 10;
    cout << "Copy Initialization: a = " << a << endl;

    // Direct Initialization
    int b(20);
    cout << "Direct Initialization: b = " << b << endl;

    // Uniform Initialization (C++11)
    int c{30};
    cout << "Uniform Initialization: c = " << c << endl;

    // Default Initialization
    int d{};
    cout << "Default Initialization: d = " << d << endl;

    return 0;
}
