#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int total = 0;
    float average;
    char grade;

    for(int i = 0; i < 5; i++) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    average = total / 5.0;

    if(average >= 90 && average <= 100)
        grade = 'A';
    else if(average >= 80)
        grade = 'B';
    else if(average >= 70)
        grade = 'C';
    else if(average >= 60)
        grade = 'D';
    else
        grade = 'F';

    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
