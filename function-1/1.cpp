#include<iostream>
using namespace std;

int sum(){
    int a , b ;

    cout << "Enter the value = ";
    cin >> a;

    cout << "Enter the value = ";
    cin >> b;

    
    return a + b;
    cout << endl;
}
int main()
{
   int result = sum();
   cout << "Sum = " << result ;
   
}