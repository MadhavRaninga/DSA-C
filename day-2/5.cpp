#include <iostream>

using namespace std;

int main (){

    int a , b ,c , d , e , f;

    cout << "enter first value :" ;
    cin >> a;

    cout <<"enter second value :";
    cin >> b ;

    cout <<"enter third value :";
    cin >> c ;

    cout <<"enter fourth value :";
    cin >> d ;

    cout <<"enter fifth value :";
    cin >> e ;

    cout <<"enter sixth value :";
    cin >> f ;
   
    if (a != b && a != c && a != d && a != e && a != f && b != c && b != d && b != e && b != f && c != d && c != e && c != f && d != e && d != f && e != f )
    
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                if (a > e)
                {
                    if (a > f)
                    {
                        cout << "first value is max.";
                    }
                    else{
                        cout << "sixth value is max.";

                    }
                    
                }
                else{
                    cout << "fifth value is max.";

                }
                
            }
            else{
                cout << "fourth value is max.";

            }
            
        }
        else{
            cout << "third value is max.";

        }
    }
    else{

        if (b > c)
        {
            if (b > d)
            {
                if (b > e)
                {
                    if (b > f)
                    {
                        cout << "second value is max.";

                    }
                    else{
                        cout << "sixth value is max.";

                    }
                    
                }
                else{
                    cout << "fifth value is max.";

                }
                
            }
            else{
                cout << "fourth value is max.";

            }
            

        }
        else{
            if (c > d)
            {
                if (c > e)
                {
                    if (c > f)
                    {
                        cout << "third value is max.";

                    }
                    else{
                        cout << "sixth value is max.";

                    }
                    
                }
                else{
                    cout << "fifth value is max.";

                }
                
            }
            else{
                if (d > e)
                {
                    if (d > f)
                    {
                        cout << "fourth value is max.";

                    }
                    else{
                        cout << "sixth value is max.";

                    }
                }
                else{
                    if (e > f)
                    {
                        cout << "fifth value is max.";

                    }
                    else{
                        cout << "sixth value is max.";

                    }
                    
                }
                
            }
            
        }
        
    }
    else{
        cout << "some value are same !";
    }
    
}