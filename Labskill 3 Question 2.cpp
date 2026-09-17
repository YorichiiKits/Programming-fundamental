#include <iostream>
#include <string>
using namespace std;

// Function prototypes
string getDay(int number);
double getTemperature(string day);
double checkHighestTemp(double temperature, string day, double &maxTemp, string &maxDays);

// Main function
int main() {
    double maxTemp = -999.0;
    string maxDays = "";

    for (int i = 0; i < 7; i++) {
        string day = getDay(i); 
        double currentTemp = getTemperature(day);
        checkHighestTemp(currentTemp, day, maxTemp, maxDays);
    }

    cout << "\nThe highest temperature is " << maxTemp << " on " << maxDays << endl;
    return 0;
}
// Days function
string getDay(int number) {
    string days[7] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"
    };
    return days[number];
}

// Input function
double getTemperature(string day) {
    double inputTemperature;
    cout << "Enter temperature for " << day << " (Celsius): ";
    cin >> inputTemperature;
    return inputTemperature;
}

// Update max temperature and days
double checkHighestTemp(double temperature, string day, double &maxTemp, string &maxDays) {
    if (temperature > maxTemp) {
        maxTemp = temperature;
        maxDays = day;            
    } 
    else if (temperature == maxTemp) {
        if (maxDays.empty()) {
            maxDays = day;
        } else {
            maxDays += ", " + day; 
        }
    }
    return maxTemp;
}
