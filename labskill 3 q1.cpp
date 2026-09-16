#include <iostream>
using namespace std;

double readNumber(void);
void calculateMultiply(double n);

int main() {
    double number;
    char choice;
     do {
        number = readNumber();
        calculateMultiply(number);
        cout << "Want to continue (y-yes/n-no): ";
        cin >> choice;
        cout << endl;
        
    } while (choice != 'n');
    return 0;
}

double readNumber(void) {
    double number;
    cout << "Enter number to multiply: ";
    cin >> number;
    return number;
}

void calculateMultiply(double n) {
    for (int i = 0; i <= 10; i++) {
        cout << i << " x " << n << " = " << (i * n) << endl;
    }
}