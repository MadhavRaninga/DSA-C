#include <iostream>

using namespace std;

int main(){

    int a , b ,c , d , f;

    cout << "enter first value :" ;
    cin >> a;

    cout <<"enter second value :";
    cin >> b ;

    cout <<"enter third value :";
    cin >> c ;

    cout <<"enter third value :";
    cin >> d ;

    cout <<"enter third value :";
    cin >> f ;

    if (a != b && a != c && a != d && a != f &&  b != c && b != d && b != f && c != d && c != f && d != f )
    {
        if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                if (a > f)
                {
                    cout << "first value is max..";
                }
                else{
                    cout << "fifth value is max..";
                }   
            }
            else{
                cout << "fourth value is max..";
            }
            
        }
        else{
            cout << "third value is max..";
        }
        
    }
    else{
        if (b > c)
        {
            if (b > d)
            {
                if (b > f)
                {
                    cout << "second value is max..";
                }
                else{
                    cout << "fifth value is max..";
                    
                }
                
            }
            else{
                cout << "fourth value is max..";

            }
            
        }
        else{
            if (c > d)
            {
                if (c > f)
                {
                    cout << "third value is max..";

                }
                else{
                    cout << "fifth value is max..";

                }
                
            }
            else{
                if (d > f)
                {
                    cout << "fourth value is max..";

                }
                else{
                    cout << "fifth value is max..";

                }
                
            }
            
        }
        
    }
    
}
else{
    cout << "some value are same !";
}
    }