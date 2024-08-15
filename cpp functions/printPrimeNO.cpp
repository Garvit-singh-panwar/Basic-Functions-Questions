// write a program to print prime no between a & b
#include<iostream>
using namespace std;
bool primeNoBetween(int a){
 for(int i =2 ; i< a ; i++ ){
    if(a%i == 0){
        return false;
    }
 }
 return true;
}

int main()
{
    int a , b ; 
    cout << "Enter starting number " << endl ;
    cin >> a;
    cout << "Enter Ending no " << endl;
    cin >> b ;
    cout << " PRime no between " << a << " and " << b << endl;
    for( int i = a; i <= b ; i++)
    {
        if(primeNoBetween(i)) {
            cout << i <<" ";
        }
    }
      
    return 0;
}