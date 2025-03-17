#include <iostream>

using namespace std;

int main(){
    int user , temp;

    cout << "Enter the value = ";
    cin >> user;

    while (user != 0)
    {
        user = user / 10; 
        temp++; 
    }
    cout << temp ;
}
