#include<iostream>
using namespace std;

int main()
{
    int size , row , col;

    cout << "Enter the size of Row & Col = ";
    cin >> size;
    
    int box[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout<< "box[" << i <<"]" <<"[" << j << "] = ";
            cin >> box[i][j];
        }
    }
    cout << "-------------------------------" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout<< box[i][j] << " "; 
        }
         cout << endl;    
    }
    cout << "-------------------------------" << endl;

    cout << "Enter the no. of Row = ";
    cin >> row;
    if (row < 0 || row >= size)
    {
        cout << "Invalid Row !" << endl;
    }
    else 
    {
        int rowsum = 0;
        cout << "Element of Row " << row << " : ";
        for (int j = 0; j < size; j++)
        {
            cout << box[row][j] << " ";
            rowsum += box[row][j];
        }
        cout << endl ;
        cout << "Sum of row " << row << " = " << rowsum << endl;
    }

    cout << "-------------------------------" << endl;

    cout << "Enter the no. of Col = ";
    cin >> col;

    if (col < 0 || col >= size)
    {
        cout << "Invalid Col !" << endl;
    }
    else
    {
        int colsum = 0;
        cout << "Element of Col " << col << " : ";
        for (int i = 0; i < size; i++)
        {
            cout << box[i][col] << " ";
            colsum += box[i][col];
        }
        cout << endl;
        cout << "Sum of Col " << col << " = " << colsum << endl;
    }
   
}