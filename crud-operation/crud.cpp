#include <iostream>
using namespace std;

int main(){

    int user , size = 0;
    int box[size];

    do
    {    
    cout << "1. Create." << endl;
    cout << "2. Read." << endl;
    cout << "3. Update." << endl;
    cout << "4. Delete." << endl;
    cout << "5. Exit." << endl;

    cout << "Enter your Choice = ";
    cin >> user;

    switch (user)
    {
    case 1:
    int a ;
    cout << "How many value enter in array ";
    cin >> a;
        for (int i = 0; i < a; i++)
        {
           cout << "Enter a number " <<(i + 1) << " = ";
           cin >> box[i];
           size++;
        }
           cout << "number added successfully ." <<endl;
           break;
    
    case 2:

        if (size == 0)
        {
            cout << "array is empty !" << endl;
        }
        cout << "Array is = ";
        for (int i = 0; i < size; i++)
        {
            cout  << box[i] << " ";
            
        }
        cout << endl;
        break;
    }

    }
     while (user != 0);
    
    


}