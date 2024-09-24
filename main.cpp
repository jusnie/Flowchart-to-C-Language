// Credits by juanie ng ict jobs
#include <iostream>
using namespace std;

int main() {
    double annualIncome, tax = 0;

    // Input the annual income
    cout << "Enter your annual income: ";
    cin >> annualIncome;

    // Compute the tax based on the "Train law"
    if (annualIncome <= 250000) {
        tax = 0;
    }
    else if (annualIncome <= 400000) {
        tax = 22500 + 0.15 * (annualIncome - 250000);
    }
    else if (annualIncome <= 800000) {
        tax = 102500 + 0.20 * (annualIncome - 400000);
    }
    else if (annualIncome <= 2000000) {
        tax = 402500 + 0.25 * (annualIncome - 800000);
    }
    else if (annualIncome <= 8000000) {
        tax = 2202500 + 0.30 * (annualIncome - 2000000);
    }
    else {
        tax = 8002500 + 0.35 * (annualIncome - 8000000);
    }

    // Display the computed tax
    cout << "Your tax is: P" << tax << endl;

    return 0;
}
