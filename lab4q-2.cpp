/*
* Write a C++ program to enter temperature in Celcius and convert it into Fahrenheit.
*/
#include<iostream>
using namespace std;
     
int main(){
         // Declaration of variables
         float celsius,fahrenheit;
         
          // Enter the temperature in celsius
           cout << "What is temperature in celcius?";
          cin >> celsius;
          // Convert into Fahrenheit 
          fahrenheit = (celsius*9.0)/5.0+32; 
          cout << "Temperature in celsius : " <<celsius << endl;
          cout << "temperature in fahrenheit: " << fahrenheit << endl;
          return 0;
}
