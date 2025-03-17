#include <iostream>

using namespace std;

int main(){
    int user , first , last , sum;

    cout << "Enter the Value = ";
    cin >> user;

    last = user % 10;

    while (user >= 10)
    {
        user = user / 10;
        first = user % 10;

    }
     cout << "First digit is = " << first << endl;
     cout << "Last digit is = " << last << endl;

     sum = first + last;

     cout << "Sum of "  << first << " and " << last << " is = "<< sum;
}