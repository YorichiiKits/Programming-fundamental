#include <iostream>
using namespace std;


//prototype function, dont forget yours
double deductions(double gross);




//main function - Priscilla




//overtime pay function - Heidi




//gross salary function - Faiesha



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