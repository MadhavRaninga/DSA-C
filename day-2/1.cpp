#include <iostream>

using namespace std;

int main(){
    int a , b;

    cout << "enter first value : " ;
    cin >> a;

    cout <<"enter second value : ";
    cin >> b ;
   if (a != b && b != a)
   {
    if (a > b)
    {
       cout << "first value is max.";
    }
    else{
        cout << "second value is max.";
    }
   }
   
   else{
     cout << "All value are same !";    
   }
    
}