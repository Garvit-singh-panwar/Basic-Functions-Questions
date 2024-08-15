//Write a function to print square of thefirst 5 natural numbers
#include<iostream>
using namespace std ;
int square(int a){
    return a*a;
}
int main(){
    cout << " square of the first 5 natural numbers" << endl ; 
    for(int i = 1 ; i <=5 ; i++){
        cout << square(i) << " ";
    }
    return 0;
}