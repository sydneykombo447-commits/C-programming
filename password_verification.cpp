#include <iostream>
#include <string>

using namespace std;

int main() {
    // Predefined correct credentials
    const string CORRECT_USERNAME = "admin";
    const string CORRECT_PASSWORD = "Password123";

    string enteredUsername;
    string enteredPassword;

    // do-while loop ensures the user is prompted at least once
    do {
        cout << "\n=== Login System ===" << endl;
        cout << "Enter username: ";
        cin >> enteredUsername;
        cout << "Enter password: ";
        cin >> enteredPassword;

        if (enteredUsername != CORRECT_USERNAME || enteredPassword != CORRECT_PASSWORD) {
            cout << "Incorrect username or password. Please try again." << endl;
        }

    } while (enteredUsername != CORRECT_USERNAME || enteredPassword != CORRECT_PASSWORD);

    cout << "\nLogin successful! Welcome to the system." << endl;

    return 0;
}