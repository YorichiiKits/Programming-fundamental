#include <iostream>
using namespace std;

double overtimePay(void);
double grossSalary(double otPay);
double deductions(double gross);
double netSalary(double gross, double totalDeductions);

int main (){
	double otPay = overtimePay();
	double gross = grossSalary(otPay);
	double totalDeduction = deductions(gross);
	double net = netSalary(gross,totalDeduction);
    cout << "\nGross Salary: " << gross;
    cout << "\nTotal Deductions: " << totalDeduction;
    cout << "\nNet Salary: " << net << endl;
	
	return 0;
}
double overtimePay(void){
	double hours;
	double rate;
	double overtimePay;
	cout << "Enter overtime hours and overtime rate: ";
	cin >> hours >> rate;
	overtimePay = (rate*hours);
	return overtimePay;
}

double grossSalary(double otPay){
	double grossSalary;
	double basicSalary;
	double allowance;
	cout << "\n Enter basic salary: ";
	cin >> basicSalary;
	cout << "\n Enter allowance: ";
	cin >> allowance;
	grossSalary = (basicSalary + allowance + otPay);
	return grossSalary;
}
double deductions(double gross){
	double epf;
	double socso;
	double tax;
	double deduction;
	cout << "\nEnter epf rate: ";
	cin >> epf;
	epf = gross * (epf / 100.0);
	cout << "\nEnter socso amount: ";
	cin >> socso;
	cout << "\nEnter tax rate: ";
	cin >> tax;
	tax = gross * (tax / 100.0);
	deduction = (epf + socso + tax);
	return deduction;	
	
}

double netSalary(double gross, double totalDeductions){
    double netSalary;
	netSalary = (gross - totalDeductions);
	return netSalary;
}
