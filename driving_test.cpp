#include <iostream>

using namespace std;

int main() {
    // Variable declarations
    string studentName;
    double theoryMarks;
    double practicalMarks;
    double averageScore;

    // Prompt user for student details and test scores

    cout << "   ROCKY DRIVING SCHOOL - EVALUATION    " << endl;
    

    cout << "Enter Student Name: ";
    cin >> studentName;

    cout << "Enter Theory Test Marks: ";
    cin >> theoryMarks;

    cout << "Enter Practical Test Marks: ";
    cin >> practicalMarks;

    // Calculate average score
    averageScore = (theoryMarks + practicalMarks) / 2.0;

    // Display evaluation summary
    cout << "\n========================================" << endl;
    cout << "         DRIVING TEST RESULTS           " << endl;
    cout << "========================================" << endl;
    cout << fixed << setprecision(2);
    cout << "Student Name:    " << studentName << endl;
    cout << "Theory Score:    " << theoryMarks << endl;
    cout << "Practical Score: " << practicalMarks << endl;
    cout << "Average Score:   " << averageScore << endl;
    cout << "----------------------------------------" << endl;

    // Determine pass or fail status (Pass mark: >= 50)
    if (averageScore >= 50.0) {
        cout << "Final Status:    PASSED" << endl;
    } else {
        cout << "Final Status:    FAILED" << endl;
    }
    

    return 0;
}