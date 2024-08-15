#include<iostream>
using namespace std;
bool RtnOddNO(int a){
    if(a%2 != 0){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
  int a , b ; 
cout << "Enter starting number " << endl ;
cin >> a;
cout << "Enter Ending no " << endl;
cin >> b ;
cout << "ODD no between " << a << " and " <<  b  << endl ;  
for(int i = a ; i<= b; i++){
    if (RtnOddNO(i))
    {
        cout << i << " ";
    }
   }
return 0 ;

}