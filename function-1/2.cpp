#include<iostream>
using namespace std;

int evenOdd(){
    int user;

    cout << "Enter the value = ";
    cin >> user;

    if (user %2 == 0)
    {
        cout << user << " is even value.";
    }
    else{
        cout << user << " is odd value.";
    }
    return 0;
}
int main()
{
    evenOdd();
}