/*
*Write a C++ program to enter base and height of a triangle and find its area. 
*/
#include<iostream>
using namespace  std;


int main (){
int b,h, area; 
     cout << "what is the area of the tringle?";
      
     cout << "the height of the tringle is";
     cin >> h;
     cout << " the base of the tringle is";
     cin >> b;
     area = (b*h)/2;
     cout << " the area of the tringle is:" << area << endl;
return 0;
}

