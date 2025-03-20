#include<iostream>
using namespace std;

int prime(int a){
  
    int temp=0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            temp++;
        }
    }
    if (temp == 2)
    {
        cout << a << " is prime number.";
    }
    else{
        cout << a << " is not prime number.";
    }
}
int main()
{
    int user;

    cout << "Enter the value = ";
    cin >> user;

    prime(user);
}