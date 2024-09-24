// credits kay juanie
#include <iostream>
using namespace std;

int main() {
    double annualIncome, tax = 0;

    // Input the annual income
    cout << "Enter your annual income: ";
    cin >> annualIncome;

    // Decision process for calculating the tax based on income
    if (annualIncome <= 250000) {
        tax = 0;
        cout << "Yes: Income is less than or equal to 250,000\n";
    } 
    else {
        cout << "No: Income is greater than 250,000\n";
        if (annualIncome <= 400000) {
            tax = 22500 + 0.15 * (annualIncome - 250000);
            cout << "Yes: Income is less than or equal to 400,000\n";
        } 
        else {
            cout << "No: Income is greater than 400,000\n";
            if (annualIncome <= 800000) {
                tax = 102500 + 0.20 * (annualIncome - 400000);
                cout << "Yes: Income is less than or equal to 800,000\n";
            } 
            else {
                cout << "No: Income is greater than 800,000\n";
                if (annualIncome <= 2000000) {
                    tax = 402500 + 0.25 * (annualIncome - 800000);
                    cout << "Yes: Income is less than or equal to 2,000,000\n";
                } 
                else {
                    cout << "No: Income is greater than 2,000,000\n";
                    if (annualIncome <= 8000000) {
                        tax = 2202500 + 0.30 * (annualIncome - 2000000);
                        cout << "Yes: Income is less than or equal to 8,000,000\n";
                    } 
                    else {
                        cout << "No: Income is greater than 8,000,000\n";
                        tax = 8002500 + 0.35 * (annualIncome - 8000000);
                    }
                }
            }
        }
    }

    // Display the computed tax
    cout << "Your tax is: P" << tax << endl;

    return 0;
}
