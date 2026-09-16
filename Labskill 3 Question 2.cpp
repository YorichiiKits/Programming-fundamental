#include <iostream>
using namespace std;


//dont forget to add your prototype function
double checkHighestTemp(double tempInput, string day, double &maxTemp, string &maxDays);



//main function
#include <iostream>
using namespace std;
int main();
{
int celcius;
return 0 ;
}








//function for days
string getDay (int number)
{
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









//input function
double getTemperature()
{
    double temperature;
    cin >> temperature;
    return temperature;
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
