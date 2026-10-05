#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Constants
const double OVERTIME_RATE = 500.0; // Rate per hour

// Function prototypes
void getEmployeeDetails(string &name, double &basicSalary, double &overtimeHours);
double calculateOvertimePay(double overtimeHours, double ratePerHour);
double calculateNetSalary(double basicSalary, double overtimePay);
void displayPayslip(string name, double basicSalary, double overtimeHours, double overtimePay, double netSalary);

int main() {
    string name;
    double basicSalary, overtimeHours;

    // Step 1: Get employee details
    getEmployeeDetails(name, basicSalary, overtimeHours);

    // Step 2: Calculate overtime pay
    double overtimePay = calculateOvertimePay(overtimeHours, OVERTIME_RATE);

    // Step 3: Calculate net salary
    double netSalary = calculateNetSalary(basicSalary, overtimePay);

    // Step 4: Display payslip
    displayPayslip(name, basicSalary, overtimeHours, overtimePay, netSalary);

    return 0;
}

// Function definitions
void getEmployeeDetails(string &name, double &basicSalary, double &overtimeHours) {
    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    cout << "Enter overtime hours worked: ";
    cin >> overtimeHours;
}

double calculateOvertimePay(double overtimeHours, double ratePerHour) {
    return overtimeHours * ratePerHour;
}

double calculateNetSalary(double basicSalary, double overtimePay) {
    return basicSalary + overtimePay;
}

void displayPayslip(string name, double basicSalary, double overtimeHours, double overtimePay, double netSalary) {
    cout << fixed << setprecision(2);
    cout << "\n======================================" << endl;
    cout << "           EMPLOYEE PAYSLIP           " << endl;
    cout << "======================================" << endl;
    cout << "Employee Name  : " << name << endl;
    cout << "Basic Salary   : KSh " << basicSalary << endl;
    cout << "Overtime Hours : " << overtimeHours << " hrs" << endl;
    cout << "Overtime Pay   : KSh " << overtimePay << endl;
    cout << "--------------------------------------" << endl;
    cout << "Net Salary     : KSh " << netSalary << endl;
    cout << "======================================" << endl;
}