/*
* Write a C++ program to enter temperature in Fahrenheit and convert it into Celsius.
*/
#include<iostream>
using namespace std;
     
int main(){
         // Declaration of variables
         float fahrenheit,celsius;
         
          // Enter the temperature in Fahrenheit
           cout << "What is temperature in Fahrenheit?";
          cin >> celsius;
          // Convert into celsius 
          celsius  = (fahrenheit-32)*5.0/9.0;
          cout << "Temperature in fahrenheit: " <<fahrenheit << endl;
          cout << "temperature in celsius : " << celsius << endl;
          return 0;
}
