#include <iostream>
using namespace std;

double overtimePay(void);
double grossSalary(double otPay);
double deductions(double gross);
double netSalary(double gross, double totalDeductions);

int main() {
    char choice;

    do {
        double otPay = overtimePay();
        double gross = grossSalary(otPay);
        double totalDeduction = deductions(gross);
        double net = netSalary(gross, totalDeduction);

        cout << "\n=============== SALARY SLIP ===============";
        cout << "\nGross Salary:     RM" << gross; 
        cout << "\nTotal Deductions: RM" << totalDeduction; 
        cout << "\nNet Salary:       RM" << net << endl;
        cout << "===========================================\n" << endl;

        cout << "Do you want to calculate another salary slip? (Y/N): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThank you for using the Salary Calculator. Goodbye!\n";
    return 0;
}

double overtimePay(void) {
    double hours;
    double rate;
    double overtimePay;
    do {
        cout << "\nEnter overtime rate: ";
        cin >> rate;
        if (rate < 0) {
            cout << "Invalid overtime rate!";
        }
    } while (rate < 0);

    do {
        cout << "Enter overtime hours: ";
        cin >> hours;
        if (hours < 0) {
            cout << "Invalid overtime hours!\n";
        }
    } while (hours < 0);
    overtimePay = (rate * hours);
    return overtimePay;
}

double grossSalary(double otPay) {
    double grossSalary;
    double basicSalary;
    double allowance;
    do {
        cout << "\nEnter basic salary: ";
        cin >> basicSalary;
        if (basicSalary < 0) {
            cout << "Invalid basic salary!";
        }
    } while (basicSalary < 0);

    do {
        cout << "\nEnter allowance: ";
        cin >> allowance;
        if (allowance < 0) {
            cout << "Invalid allowance!";
        }
    } while (allowance < 0);
    grossSalary = (basicSalary + allowance + otPay);
    return grossSalary;
}

double deductions(double gross) {
    double epf;
    double socso;
    double tax;
    double deduction;
    do {
        cout << "\nEnter EPF rate (%): ";
        cin >> epf;
        if (epf < 0) {
            cout << "Invalid EPF rate!";
        }
    } while (epf < 0);
    epf = gross * (epf / 100.0);

    do {
        cout << "\nEnter SOCSO amount: ";
        cin >> socso;
        if (socso < 0) {
            cout << "Invalid SOCSO amount!";
        }
    } while (socso < 0);

    do {
        cout << "\nEnter tax rate (%): ";
        cin >> tax;
        if (tax < 0) {
            cout << "Invalid tax rate!";
        }
    } while (tax < 0);
    tax = gross * (tax / 100.0);
    deduction = (epf + socso + tax);
    return deduction;    
}

double netSalary(double gross, double totalDeductions) {
    double netSalary;
    netSalary = (gross - totalDeductions);
    return netSalary;
}
