#include <iostream>
#include <string>

using namespace std;

int main() {
    string studentName;
    int age;
    double score;

    // Prompt user for input
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter exam score: ";
    cin >> score;

    cout << "\n--- Admission Decision ---" << endl;
    cout << "Student: " << studentName << endl;

    // Determine admission using nested if
    if (age >= 18) {
        if (score >= 50) {
            cout << "Status: Admitted" << endl;
        } else {
            cout << "Status: Not Admitted: Low Score" << endl;
        }
    } else {
        cout << "Status: Not Admitted: Underage" << endl;
    }

    return 0;
}