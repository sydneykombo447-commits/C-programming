#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    string admissionNumber;
    double feeBalance;

public:
    // Function to input student details
    void inputStudent() {
        cout << "=== Enter Student Details ===" << endl;
        cout << "Enter Student Name: ";
        getline(cin >> ws, name); // ws consumes any leading whitespace/newlines
        cout << "Enter Admission Number: ";
        getline(cin, admissionNumber);
        cout << "Enter Initial Fee Balance: ";
        cin >> feeBalance;
    }

    // Function to process fee payment
    void makePayment() {
        double paymentAmount;
        cout << "\nEnter payment amount: ";
        cin >> paymentAmount;

        if (paymentAmount <= 0) {
            cout << "Invalid payment amount!" << endl;
        } else {
            feeBalance -= paymentAmount;
            cout << "Payment of $" << paymentAmount << " successful!" << endl;
        }
    }

    // Function to display student status
    void displayStatus() {
        cout << "\n=== Student Fee Status ===" << endl;
        cout << "Student Name: " << name << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Fee Balance: $" << feeBalance << endl;
    }
};

int main() {
    // Create an object of class Student
    Student student1;

    // 1. Input student details
    student1.inputStudent();

    // Display initial status
    student1.displayStatus();

    // 2. Make a payment
    student1.makePayment();

    // 3. Display updated status
    student1.displayStatus();

    return 0;
}