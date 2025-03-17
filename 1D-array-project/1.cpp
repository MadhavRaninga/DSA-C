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
    int min ;
    for (int i = 0; i < user; i++)
    {
       if (min > box[i])
       {
         min = box[i];
       }
       
    }
    cout << "Minimum value is = " << min;
    
}
