<<<<<<< HEAD
#include<iostream>
using namespace std;

int main()
{
    int size;
    
    cout << "Enter the Size of Array = ";
    cin >> size;
    cout << "---------------------------------" << endl;
    int box[size];

    for (int i = 0; i < size; i++)
    {
        cout << "box[" << i << "] = ";
        cin >> box[i];
    }
    cout << "---------------------------------" << endl;

    cout << "Array Value = ";
    for (int i = 0; i < size; i++)
    {
      cout << box[i] << " ";
    }
    cout << endl;
    int min, temp;
    for (int i = 0; i < size-1; i++)
    {
        min = i;
        for (int j = i; j < size ; j++)
        {
            if (box[j] < box[min])
            {
                min = j;
            }
        }
        temp = box[i];
        box[i] = box[min];
        box[min] = temp;
    }
    cout << "Array Value = ";
    for (int i = 0; i < size; i++)
    {
      cout << box[i] << " ";
    }
    cout << endl;
=======
#include<iostream>
using namespace std;

int main()
{
    int size;
    
    cout << "Enter the Size of Array = ";
    cin >> size;
    cout << "---------------------------------" << endl;
    int box[size];

    for (int i = 0; i < size; i++)
    {
        cout << "box[" << i << "] = ";
        cin >> box[i];
    }
    cout << "---------------------------------" << endl;

    cout << "Array Value = ";
    for (int i = 0; i < size; i++)
    {
      cout << box[i] << " ";
    }
    cout << endl;
    int min, temp;
    for (int i = 0; i < size-1; i++)
    {
        min = i;
        for (int j = i; j < size ; j++)
        {
            if (box[j] < box[min])
            {
                min = j;
            }
        }
        temp = box[i];
        box[i] = box[min];
        box[min] = temp;
    }
    cout << "Array Value = ";
    for (int i = 0; i < size; i++)
    {
      cout << box[i] << " ";
    }
    cout << endl;
    
>>>>>>> a3f527eab3cc605e13ca064c8b6aa96a325589cf
}