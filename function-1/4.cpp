#include<iostream>
using namespace std;

int factorial(int a){
   
    if (a <= 1)
    {
        return 1;
    }
    else{
        return a*factorial(a - 1);
    }
} 
int main()
{
    int user;
    cout << "Enter the value = ";
    cin >> user;

    cout << "Factorial is = " << factorial(user);
    
}