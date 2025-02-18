#include <iostream>
using namespace std;

int main(){
    int a,b,c;

    cout << "enter first value :" ;
    cin >> a;

    cout <<"enter second value :";
    cin >> b ;

    cout <<"enter third value :";
    cin >> c ;
 
     if (a != b &&  a != c && b != c )
     {
          
    if (a > b)
    {
       if (a > c)
       {
         printf("value First is max.");
       }
       else
       {
            printf("value Third is max.");
       }
    }
    else
    {
      if (b > c)
      {
        printf("value Second is max.");
      }
      else
      {
        printf("value Third is max.");
      }
    }
     }
   
    else
    {
        printf("value are same !");
    }
}
