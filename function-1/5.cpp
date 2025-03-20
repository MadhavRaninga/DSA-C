#include<iostream>
using namespace std;

void swap(int a , int b){
    
   int num;
   num = a;
   a = b;
   b = num;

   cout << "a = " << a << endl;
   cout << "b = " << b << endl;
}
int main()
{
    int a , b;

    cout << "Enter the value = ";
    cin >> a;
    cout << "Enter the value = ";
    cin >> b;
    
    cout << a << endl;
    cout << b << endl;
    cout << "-----------------------------" <<endl;
     swap(a , b);

    
}