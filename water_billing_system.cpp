#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Constants
const double RATE_PER_UNIT = 50.0; // Rate per unit consumed

// Function prototypes
void getCustomerDetails(string &name, double &units);
double calculateBill(double units, double ratePerUnit);
double applyDiscount(double units, double billAmount);
void displayBill(string name, double units, double totalBill, double discount, double finalAmount);

int main() {
    string customerName;
    double unitsConsumed;

    // Step 1: Get customer details
    getCustomerDetails(customerName, unitsConsumed);

    // Step 2: Calculate total bill before discount
    double totalBill = calculateBill(unitsConsumed, RATE_PER_UNIT);

    // Step 3: Calculate discount if applicable
    double discount = applyDiscount(unitsConsumed, totalBill);

    // Step 4: Compute final payable amount
    double finalAmount = totalBill - discount;

    // Step 5: Display full bill
    displayBill(customerName, unitsConsumed, totalBill, discount, finalAmount);

    return 0;
}

// Function definitions
void getCustomerDetails(string &name, double &units) {
    cout << "Enter customer name: ";
    getline(cin, name);

    cout << "Enter number of units consumed: ";
    cin >> units;
}

double calculateBill(double units, double ratePerUnit) {
    return units * ratePerUnit;
}

double applyDiscount(double units, double billAmount) {
    if (units > 100) {
        return billAmount * 0.10; // 10% discount
    }
    return 0.0;
}

void displayBill(string name, double units, double totalBill, double discount, double finalAmount) {
    cout << fixed << setprecision(2);
    cout << "\n======================================" << endl;
    cout << "          WATER SUPPLY BILL           " << endl;
    cout << "======================================" << endl;
    cout << "Customer Name  : " << name << endl;
    cout << "Units Consumed : " << units << " units" << endl;
    cout << "Rate per Unit  : KSh " << RATE_PER_UNIT << endl;
    cout << "--------------------------------------" << endl;
    cout << "Total Bill     : KSh " << totalBill << endl;
    cout << "Discount (10%) : KSh " << discount << endl;
    cout << "--------------------------------------" << endl;
    cout << "Amount Payable : KSh " << finalAmount << endl;
    cout << "======================================" << endl;
}