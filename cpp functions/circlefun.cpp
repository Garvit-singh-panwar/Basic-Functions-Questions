// write a function to print the area and circumference of a circle
#include<iostream>
using namespace std ;
#define pi 3.14
float C_circumfereance(int radius)
{
      return 2*pi*radius;
}
float C_area(int radius){

return pi*radius*radius;
}
    int main()
{

int C_radius;
cout << "Enter Radius of a circle"<<endl;
cin >> C_radius;
cout << "Cricumference of a circle is : "<<C_circumfereance(C_radius)<< endl;
cout << "area of a circle is : "<< C_area (C_radius)<< endl;
return 0 ;
}
