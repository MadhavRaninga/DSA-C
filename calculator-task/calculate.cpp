#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int Subtract(int a, int b)
{
    return a - b;
}

int multi(int a, int b)
{
    return a * b;
}

int devide(int a, int b)
{
    return a / b;
}

int mode(int a, int b)
{
    return a % b;
}

int main()
{
    int user, first, last;
    do
    {
        cout << "Press 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 for the exit" << endl;

        cout << "Enter your Choice = ";
        cin >> user;
        if (user > 0 && user <= 5)
        {
            cout << "Enter your First value = ";
            cin >> first;

            cout << "Enter your Second value = ";
            cin >> last;
        }
        
        switch (user)
        {
        case 1:
           
            cout << "Sum of " << first << " and " << last << " = " << sum(first, last) << endl;
            break;

        case 2:
            cout << "Subtract of " << first << " and " << last << " = " << Subtract(first, last) << endl;
            break;

        case 3:
         
            cout << "Multiplication of " << first << " and " << last << " = " << multi(first, last) << endl;
            break;

        case 4:
          
            cout << "Division of " << first << " and " << last << " = " << devide(first, last) << endl;
            break;

        case 5:
           
            cout << "Modular of " << first << " and " << last << " = " << mode(first, last) << endl;
            break;

        case 0:
            cout << "Exit..." << endl;
            break;
        default:
            cout << "Please Enter valid Number !" << endl;
            break;
        }
    } while (user != 0);
}