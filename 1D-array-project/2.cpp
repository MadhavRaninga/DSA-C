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
    int max = 0;
   
    for (int i = 0; i < user; i++)
    {
        if (max < box[i])
        {
            max = box[i];
        }
    }
    cout << "Maximum value is = " << max;
}