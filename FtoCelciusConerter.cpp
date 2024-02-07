#include <iostream>
#include <iomanip>

using namespace std; 

int main() {
  double tempF, tempC;
    string firstName, lastName;
    cout << "What is your first and last name ";
    cin >> firstName >> lastName;
   cout << firstName << ", what is the temperature in Fahrenheit? " << endl;
    cin >> tempF;
    tempC = ((tempF -32)*5)/9;
    cout << fixed <<setprecision(1)<<tempC;
  return 0;
}