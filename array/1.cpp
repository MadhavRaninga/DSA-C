#include <iostream>
using namespace std;

int main(){

    int user;
    float sum = 0 , ave;

    cout << "Enter array size = ";
    cin >> user;

    int box[user];

    for (int i = 0; i < user; i++)
    {
        cout << "box [" <<i << "] = ";
        cin >> box[i];
    }
        
    for (int i = 0; i < user; i++)
    {
        sum = sum + box[i];
        ave = sum / user;
    }
    cout << "Sum = " << sum << endl;
    cout << "Average of an Array : " << ave ;
}