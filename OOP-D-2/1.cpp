#include<iostream>
using namespace std;

class sum{
public:

    int plus(int a , int b){
        cout << "Sum = " << a + b << endl;
    }

    double plus(double a , double b){
        cout << "Sum = " << a + b;
    }
};

int main()
{
    sum obj;
    obj.plus(10,5) ; 
    obj.plus(11.55,5.55); 
}