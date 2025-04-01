#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int box[size];

    for (int i = 0; i < size; i++)
    {
        cout << "box[" << i << "] = ";
        cin >> box[i];
    }
    cout << "---------------------------------" << endl;
    
    cout << "Array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << box[i] << " ";
    }
    cout << endl;
    cout << "---------------------------------" << endl;
    for (int i = 0; i < size; i++)
    {
        
       if (box[i] < 0)
       {
           cout << "Negative number is : " << box[i] << endl;
       }
      
       
    }
}