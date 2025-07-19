#include <iostream>
using namespace std;

int x = 100; // Global scope

void showScopes() {
    int x = 50; // Function scope (shadows global x)
    cout << "Inside function - x: " << x << endl;

    {
        int x = 10; // Block scope (shadows function x)
        cout << "Inside block - x: " << x << endl;
    }

    cout << "After block - x: " << x << endl;
}

int main() {
    cout << "Global x in main: " << x << endl;

    showScopes();

    cout << "Back in main - Global x: " << x << endl;

    return 0;
}
