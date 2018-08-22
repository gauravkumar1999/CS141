/*
 * Write a C++ program to enter length in cm and convert it into m and km.
 */ 
#include<iostream>
using namespace std;

int main(){
	// Declaration of variables
	float cm,m,km;

	// Enter length in cm
	cout << "What is the length in cm?";
	cin >> cm; 
	// Convert into m
	m = cm*0.01;
	// Convert into km
	km = m*0.001;
	// Display the output
	cout << "Length in m : " << m << endl;
	cout << "Length in km : " << km << endl;
	return 0;
}




