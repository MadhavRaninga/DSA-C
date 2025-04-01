#include<iostream>
using namespace std;

    int size = 0 , val , pos;

// create //
void insert(int size , int box[]){

    if (size == 0)
    {
        cout << "Enter the value = ";
        cin >> val;
        box[0] = val;
        size++;
    }
    else{
        cout << "Enter the position = ";
        cin >> pos;
        if (pos <= size)
        {
         cout << "Enter the value = ";
         cin >> val;
            for (int i = size; i > pos; i--)
            {
                box[i] = box[i - 1];
            }
           box[pos] = val;
           size++;
        }
        else{
            cout << "invalid value !" << endl;
        }
    }
}
//  read  //
void read(int box[] , int size){
    cout << "Array value is : ";
    for (int i = 0; i < size; i++)
    {
        cout << box[i] << " ";
    }
}

int main()
{
    int box[size];
    insert(size , box);
    read(box , size);
}