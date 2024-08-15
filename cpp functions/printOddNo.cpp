#include<iostream>
using namespace std;
void oddNoBetween(int a, int b)
{
    for(int i = a; i<=b ; i++)
    {
        if(i % 2 != 0 )
        {
            cout << i << " " ;
        }
    }
}
int main() 
{
int a , b ; 
cout << "Enter starting number " << endl ;
cin >> a;
cout << "Enter Ending no " << endl;
cin >> b ;
oddNoBetween(a, b);
return 0;  
}