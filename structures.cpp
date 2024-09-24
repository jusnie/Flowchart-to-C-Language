#include <iostream>
using namespace std;

// Structure to represent a tax bracket
struct TaxBracket {
    double lowerBound;
    double upperBound;
    double baseTax;
    double rate;
    double excessBase;
};

// Function to compute the tax based on income and tax brackets
double computeTax(double income, TaxBracket brackets[], int size) {
    for (int i = 0; i < size; i++) {
        if (income > brackets[i].lowerBound && (income <= brackets[i].upperBound || brackets[i].upperBound == -1)) {
            return brackets[i].baseTax + brackets[i].rate * (income - brackets[i].excessBase);
        }
    }
    return 0;  // Default case (shouldn't happen)
}

int main() {
    // Defining the tax brackets based on the TRAIN law
    TaxBracket brackets[] = {
        {0, 250000, 0, 0, 0},                                  // Bracket 1: Up to P250,000 (no tax)
        {250000, 400000, 22500, 0.15, 250000},                  // Bracket 2: P250,001 to P400,000
        {400000, 800000, 102500, 0.20, 400000},                 // Bracket 3: P400,001 to P800,000
        {800000, 2000000, 402500, 0.25, 800000},                // Bracket 4: P800,001 to P2,000,000
        {2000000, 8000000, 2202500, 0.30, 2000000},             // Bracket 5: P2,000,001 to P8,000,000
        {8000000, -1, 8002500, 0.35, 8000000}                   // Bracket 6: Above P8,000,000
    };

    int bracketCount = sizeof(brackets) / sizeof(brackets[0]);

    // Input the annual income
    double annualIncome;
    cout << "Enter your annual income: ";
    cin >> annualIncome;

    // Compute the tax
    double tax = computeTax(annualIncome, brackets, bracketCount);

    // Display the computed tax
    cout << "Your tax is: P" << tax << endl;

    return 0;
}
