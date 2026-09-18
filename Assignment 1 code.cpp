#include <iostream>
using namespace std;


//prototype function, dont forget yours
double deductions(double gross);
double calculateNetSalary(double basicSalary,double overtimeHours,double overtimeRate,double allowances,double epfRate,double socso,double taxRate);




//main function - Priscilla
int main()
{
    double basicSalary;
    double overtimeHours;
    double overtimeRate;
    double allowances;
    double epfRate;
    double socso;
    double taxRate;

    double overtimePay;
    double grossSalary;
    double totalDeductions;
    double netSalary;
	
    cout << "Enter basic salary: ";
    cin >> basicSalary;
    cout << "Enter overtime hours: ";
    cin >> overtimeHours;
    cout << "Enter overtime rate: ";
    cin >> overtimeRate;
    cout << "Enter allowances: ";
    cin >> allowances;
    cout << "Enter EPF rate: ";
    cin >> epfRate;
    cout << "Enter SOCSO: ";
    cin >> socso;
    cout << "Enter tax rate: ";
    cin >> taxRate;

    overtimePay = calculateOvertime(overtimeHours, overtimeRate);
    grossSalary = basicSalary + overtimePay + allowances;
    totalDeductions = calculateDeductions(
    basicSalary, grossSalary, epfRate, socso, taxRate);
    netSalary = calculateNetSalary(grossSalary, totalDeductions);
	
    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Total Deductions: " << totalDeductions << endl;
    cout << "Net Salary: " << netSalary << endl;

    return 0;
}

//overtime pay function - Heidi




//gross salary function - Faiesha
double grossSalary;
double basicSalary;
double allowance;
double overtimePay;

cout<<"\nEnter Basic Salary (RM) :";
cin>>basicSalary;
cout<<"\nEnter Allowance (RM) :";
cin>>allowance;
cout<<"\nEnter Overtime Pay (RM) :";
cin>>overtimePay;

grossSalary=basicSalary+allowance+overtimePay;
	



//deductions function - Amar
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

//Net salary function - Jen
double calculateNetSalary(double basicSalary,double overtimeHours,double overtimeRate,double allowances,double epfRate,double socso,double taxRate){
double overtimePay;
double grossSalary;
double epfDeduction;
double taxDeduction;
double totalDeductions;
double netSalary;	
	overtimePay = overtimeHours * overtimeRate;
	grossSalary = basicSalary + overtimePay + allowances;
 	epfDeduction = basicSalary * epfRate;
    taxDeduction = grossSalary * taxRate;
    totalDeductions = epfDeduction + socso + taxDeduction;
    netSalary = grossSalary - totalDeductions;
	
	cout << "Net Salary: RM " << netSalary << endl;

	return netSalary;
}
