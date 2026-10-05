#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double balance;
    double withdrawalAmount;

    cout << "Enter initial account balance: ";
    cin >> balance;

    // Loop continues while there is a positive balance
    while (balance > 0) {
        cout << fixed << setprecision(2);
        cout << "\nCurrent Balance: $" << balance << endl;
        cout << "Enter withdrawal amount: ";
        cin >> withdrawalAmount;

        // Condition: Stop loop if withdrawal amount exceeds balance
        if (withdrawalAmount > balance) {
            cout << "\nError: Insufficient funds! Withdrawal amount exceeds current balance." << endl;
            break; // Stop loop immediately
        }

        // Deduct and update balance
        balance -= withdrawalAmount;
        cout << "Withdrawal successful! Remaining balance: $" << balance << endl;

        // Condition: Stop loop if balance reaches zero
        if (balance == 0) {
            cout << "Your account balance is now zero." << endl;
            break;
        }
    }

    cout << "\nTransaction session ended." << endl;
    return 0;
}