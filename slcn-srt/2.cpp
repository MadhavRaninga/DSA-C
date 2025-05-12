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
    int minIndex, temp;
    for (int i = 0; i < size; i++)
    {
        minIndex = i;
        for (int j = i; j < size ; j++)
        {
            if (box[j] < box[minIndex])
            {
                minIndex = j;
            }
        }
        temp = box[i];
        box[i] = box[minIndex];
        box[minIndex] = temp;
    }
    cout << "---------------------------------" << endl;
    cout << "After Sorting = ";
    for (int i = 0; i < size; i++)
    {
      cout << box[i] << " ";
    }
    cout << endl;
    
}