#include <iostream>
using namespace std;

int main(){
    int user;

    cout << "Enter the size of Array = ";
    cin >> user;

    int box[user];
    for (int i = 0; i < user; i++)
    {
        cout <<"box[" <<i << "] = ";
        cin >> box[i];
    }
     cout << "Reverse Array = ";
    for (int i = 0; i < user; i++)
    {
      cout << box[user - 1 - i] << " ";

    }
}