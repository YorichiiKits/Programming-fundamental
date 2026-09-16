//This is the final, fixed code

#include <iostream>
using namespace std;

//dont forget to add your prototype function
double getTemperature(string day);
double checkHighestTemp(double temperature, string day, double &maxTemp, string &maxDays);

//main function
int main(){
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
        double currentTemp = getTemperature(day);
        checkHighestTemp(currentTemp, day, maxTemp, maxDays);
    }

cout << "The highest temperature is " << maxTemp << " on " << maxDays << endl;
    return 0;
}
//input function
double getTemperature(string day)
{
    double temperature;
    cout << "Enter temperature for " << day << " (Celsius): ";
    cin >> temperature;
    return temperature;
}

//Update max temperature and days 
double checkHighestTemp(double temperature, string day, double &maxTemp, string &maxDays) {
    if (temperature > maxTemp) {
        maxTemp = temperature;
         //set highest day
        maxDays = day;            
    } 
    else if (temperature == maxTemp) {
        maxDays += ", " + day; 
    }
    return maxTemp;
}
