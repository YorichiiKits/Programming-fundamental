#include <iostream>
using namespace std;

double getTemp(string day);
double checkHighestTemp(double tempInput, string day, double &maxTemp, string &maxDays);

int main() {
    double maxTemp = -999.0;
    string maxDays = "";

    for (int i = 1; i <=7; i++) {
    	string day;
    	if (i == 1) day = "Monday";
    	else if (i == 2) day = "Tuesday";
    	else if (i == 3) day = "Wednesday";
    	else if (i == 4) day = "Thursday";
    	else if (i == 5) day = "Friday";
    	else if (i == 6) day = "Saturday";
    	else if (i == 7) day = "Sunday";
        double currentTemp = getTemp(day);
        checkHighestTemp(currentTemp, day, maxTemp, maxDays);
    }

    cout << "The highest temperature is " << maxTemp << " on " << maxDays << endl;
    return 0;
}
double getTemp(string day) {
    double inputTemp;
    cout << "Enter temperature for " << day << " (Celsius): ";
    cin >> inputTemp;
    return inputTemp;
}
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