#include <iostream>
using namespace std;

 //dont forget to add prototype function
void displayTable(int num);

 
 //main function
int main() {
    double number;
    char choice;
     do {
        number = readNumber();
        displayTable(number);
        cout << "Want to continue (y-yes/n-no): ";
        cin >> choice;
        cout << endl;
        
    } while (choice != 'n');
    return 0;
}

//input function


 //Calculation & output function
 void displayTable(int num)
 {
    for (int i = 0; i <= 10; i++)
    {
        cout << i << " x " << num << " = " << i * num << endl;
    }
}
