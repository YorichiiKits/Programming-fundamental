#include <iostream>
using namespace std;


//dont forget to add your prototype function
double checkHighestTemp(double tempInput, string day, double &maxTemp, string &maxDays);



//main function









//function for days









//input function








//Update max temperature and days 
double checkHighestTemp(double tempInput, string day, double &maxTemp, string &maxDays) {
    if (tempInput > maxTemp) {
        maxTemp = tempInput;
         //set highest day
        maxDays = day;            
    } 
    else if (tempInput == maxTemp) {
        maxDays += ", " + day; 
    }
    return maxTemp;
}