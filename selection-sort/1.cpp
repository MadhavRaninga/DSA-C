#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of Array = ";
    cin >> size;

    int box[size];
    for (int i = 0; i < size; i++)
    {
        cout << "box[" << i << "] = ";
        cin >> box[i];
    }
    cout << "-------------------------------------" << endl;
    cout << "Before Sorting = ";
    for (int i = 0; i < size; i++)
    {
        cout << box[i] << " ";
    }
    cout << endl;
    cout << "-------------------------------------" << endl;

    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i; j < size; j++)
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
    cout << "-------------------------------------" << endl;
    cout << "After Sorting = ";
    for (int i = 0; i < size; i++)
    {
        cout << box[i] << " ";
    }
    cout << endl;
    cout << "-------------------------------------" << endl;

}