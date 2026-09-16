#include <iostream>
using namespace std;

 //dont forget to add prototype function
 
 
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