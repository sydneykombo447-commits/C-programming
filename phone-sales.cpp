#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Variable declarations
    string customerName;
    string phoneModel;
    int quantity;
    double pricePerPhone;
    double totalSalesAmount;

    // Input prompts
    cout << "=== MOBILE PHONE SALES SYSTEM ===" << endl;
    cout << "Enter Customer Name: ";
    getline(cin, customerName);

    cout << "Enter Phone Model Purchased: ";
    getline(cin, phoneModel);

    cout << "Enter Quantity Bought: ";
    cin >> quantity;

    cout << "Enter Price Per Phone (KSh): ";
    cin >> pricePerPhone;

    // Calculation
    totalSalesAmount = quantity * pricePerPhone;

    // Output formatted receipt
    cout << "\n----------------------------------------" << endl;
    cout << "           RUIRU PHONE SHOP             " << endl;
    cout << "            SALES RECEIPT               " << endl;
    cout << "----------------------------------------" << endl;
    cout << fixed << setprecision(2); // Sets currency output to 2 decimal places
    cout << "Customer Name : " << customerName << endl;
    cout << "Phone Model   : " << phoneModel << endl;
    cout << "Quantity      : " << quantity << endl;
    cout << "Price/Phone   : KSh " << pricePerPhone << endl;
    cout << "----------------------------------------" << endl;
    cout << "TOTAL AMOUNT  : KSh " << totalSalesAmount << endl;
    cout << "----------------------------------------" << endl;
    cout << "     Thank you for shopping with us!    " << endl;

    return 0;
}