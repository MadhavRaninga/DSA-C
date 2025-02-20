#include <iostream>

using namespace std;

int main(){

    int user , a = 50 , b = 100 , c = 150 , d = 300;
    float num , ave , total;
    
    cout << "enter your units = ";
    cin >> user ;

    if (user <= 50)
    {
        num = user * 0.50;
        cout << user << " x " << 0.50 << " = " << num << endl ;
    }
    else if (user <= 150)
    {
        num = (50 * 0.5) + (user - a) * 0.75 ;
        cout << num << endl;
    }
    else if (user <= 300)
    {
        num = (50 * 0.5) + (100 * 0.75) + ((user - c) * 1.20) ;
        cout << num << endl;
    }
    else{
        num = (50 * 0.5) + (100 * 0.75) + (150 * 1.20) + ((user - d) * 1.50) ;
        cout << "Amount is = " << num << endl;
    }
    ave = (num * 20) / 100;
    cout << "Add 20% text in amount = " << ave << endl;
    total = num + ave ;
    cout << "Total payable Amount = " << total ;
}