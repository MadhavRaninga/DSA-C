#include<iostream>
using namespace std;

int calculate(int base , int exponent){
    
    if (exponent == 0)
    {
        return 1;
    }
    else{
       return base * calculate(base , exponent - 1);
    }
}
int main()
{
    int base , exponent;
    cout << "Enter base = ";
    cin >> base;

    cout << "Enter exponent = ";
    cin >> exponent;
    
    cout <<  calculate(base , exponent);

}