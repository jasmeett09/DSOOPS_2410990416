#include <iostream>
#include <string>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    float floats[3] = {1.1, 2.2, 3.3};
    char letters[4] = {'A', 'B', 'C', 'D'};
    string names[2];
    names[0] = "Alice";
    names[1] = "Bob";

    numbers[2] = 35;

    int sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    float average = sum / 5.0;

    cout << "Modified numbers array: ";
    for(int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    cout << "\nSum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
