#include <iostream>
using namespace std;

 //dont forget to add prototype function


 //Calculation & output function
 void displayTable(int num)
 {
    for (int i = 0; i <= 10; i++)
    {
        cout << i << " x " << num << " = " << i * num << endl;
    }
}
 
 //main function
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

//add more functions
