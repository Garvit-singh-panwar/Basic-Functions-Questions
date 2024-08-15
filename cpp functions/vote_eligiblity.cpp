#include <iostream>
using namespace std;
void voteEligblity(int age)
{
    if(age >=18){
        cout << " He/she can vote" << endl;
    }
    else {
        cout << " Not Eligible" << endl;
    }
}
int main()
{
    int age;
    cout << "Enter the age of a person ";
    cin >> age ;
    voteEligblity(age);
    return 0;
}