#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char op;

    // Prompt user for input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    // Perform calculation using switch statement
    switch (op) {
        case '+':
            result = num1 + num2;
            cout << "\nResult: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "\nResult: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "\nResult: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            // Handle division by zero
            if (num2 != 0) {
                result = num1 / num2;
                cout << "\nResult: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "\nError: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "\nError: Invalid operator selected." << endl;
            break;
    }

    return 0;
}