/*
* Write a c++ program to enter two angles of a tringle and find the third angle.
*/ 
#include<iostream>
using namespace std;

int main() {
           // Declaration of variables 
           float ang1,ang2,ang3;

         cout << "what is the the third angle ?"; 
         cout <<"the 1st angle ";
         cin >> ang1;
         cout << "the 2nd angle ";
         cin >>  ang2;
         ang3= 180-(ang1+ang2);
         cout << "the 3rd of the tringle is :" << ang3 << endl;
return  0;
}

