#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    const double deduction = 11e6;
    double income;
    double taxableIncome;
    char anwser;

    do 
    {
        // Prompt the user for salary
        cout << "Please enter your salary: ";

        // Handle negative numbers and non-numeric input
        if (!(cin >> income) || income < 0) {
            cout << "Invalid input!\n";
            return 1;
        }
        
        // taxeble income after deduction
        taxableIncome = income - deduction;

        // If taxable income < 0, then no tax owed
        if (taxableIncome < 0) {
            cout << "No tax owed!\n";
            return 0;
        } 
        
        // Otherwise calculate the tax owed
        else {
            double tax = 0;
            if (taxableIncome > 80e6) {
                tax += (taxableIncome - 80e6) * 0.35;
                taxableIncome = 80e6;
            }
            if (taxableIncome > 52e6) {
                tax += (taxableIncome - 52e6) * 0.3;
                taxableIncome = 52e6;
            }
            if (taxableIncome > 32e6) {
                tax += (taxableIncome - 32e6) * 0.25;
                taxableIncome = 32e6;
            }
            if (taxableIncome > 18e6) {
                tax += (taxableIncome - 18e6) * 0.2;
                taxableIncome = 18e6;
            }
            if (taxableIncome > 10e6) {
                tax += (taxableIncome - 10e6) * 0.15;
                taxableIncome = 10e6;
            }
            if (taxableIncome > 5e6) {
                tax += (taxableIncome - 5e6) * 0.1;
                taxableIncome = 5e6;
            }
            if (taxableIncome >= 0) {
                tax += taxableIncome * 0.05;
                taxableIncome = 0;
            }
            cout << "Your tax payment amount is VND ";
            cout << (long long) tax << ".\n";
        }

        // Prompt the user for next input
        cout << "Do you want to continue? (Y/N) ";
    } while (cin >> anwser && tolower(anwser) == 'y');


    return 0;
}