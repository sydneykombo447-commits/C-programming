#include <iostream>
#include <string>

using namespace std;

int main() {
    string studentName;
    double marks;

    // Prompt user for details
    cout << "Enter student name: ";
    getline(cin, studentName);
    
    cout << "Enter exam marks (0 - 100): ";
    cin >> marks;

    // Validate and assign grade using if-else ladder
    char grade;
    if (marks >= 70 && marks <= 100) {
        grade = 'A';
    } else if (marks >= 60 && marks < 70) {
        grade = 'B';
    } else if (marks >= 50 && marks < 60) {
        grade = 'C';
    } else if (marks >= 40 && marks < 50) {
        grade = 'D';
    } else if (marks >= 0 && marks < 40) {
        grade = 'E';
    } else {
        cout << "Invalid marks entered!" << endl;
        return 1;
    }

    // Display output
    cout << "\n--- Student Grade Report ---" << endl;
    cout << "Name: " << studentName << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}