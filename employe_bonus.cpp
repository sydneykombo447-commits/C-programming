#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string name;
    double basicSalary;
    double bonus;
    double totalSalary;

    // Fixed for loop running for 5 employees
    for (int i = 1; i <= 5; i++) {
        cout << "--- Employee " << i << " ---" << endl;
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter basic salary: ";
        cin >> basicSalary;

        // Calculations
        bonus = 0.05 * basicSalary;
        totalSalary = basicSalary + bonus;

        // Display report for current employee
        cout << fixed << setprecision(2);
        cout << "\n=== Employee Report ===" << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: $" << basicSalary << endl;
        cout << "Bonus (5%): $" << bonus << endl;
        cout << "Total Salary: $" << totalSalary << endl;
        cout << "---------------------------\n" << endl;
    }

    return 0;
}