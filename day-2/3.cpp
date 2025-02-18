#include <iostream>

using namespace std;

int main(){

    int a , b ,c , d ;

    cout << "enter first value :" ;
    cin >> a;

    cout <<"enter second value :";
    cin >> b ;

    cout <<"enter third value :";
    cin >> c ;

    cout <<"enter third value :";
    cin >> d ;

    
    
    if (a != b && a != c && a != d && b != c && b != d && c != d )
    {
        if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                cout << "first value is max. " << endl;
            }
            else {
                cout << "fourth value is max. " << endl;
            }           
        }

        else{
            cout << "third value is max. " << endl;

        }
        
    }
    else{
        if (b > c)
        {
            if (b > d)
            {
                cout << "second value is max. " << endl;

            }
            else{
                cout << "fourth value is max. " << endl;

            }
            
        }
        else{
            if (c > d)
            {
                cout << "third value is max. " << endl;

            }
            else{
                cout << "fourth value is max. " << endl;

            }
        }

    }
    
}
     
    else{
        cout << "some value are same ! ";
    }

}    