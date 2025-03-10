#include <iostream>
using namespace std;

int main(){

    int user;
    cout << "Enter array size = ";
    cin >> user;

    cout << "------------------------------------ " << endl;
    int box1[user];

    for (int i = 0; i < user; i++)
    {
        cout << "box1 [" <<i << "] = ";
        cin >> box1[i];
    }
    cout << "------------------------------------ " << endl;
    
    int box2[user];

    for (int i = 0; i < user; i++)
    {
        cout << "box2 [" <<i << "] = ";
        cin >> box2[i];
    }
    cout << "------------------------------------ " << endl;

    int box3[user];
    cout <<  "Array C is : ";
    for (int i = 0; i < user; i++)
    {
        box3[i] = box1[i] + box2[i];
        cout << box3[i] << " ";   
    }
}