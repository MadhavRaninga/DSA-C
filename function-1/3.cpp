#include<iostream>
using namespace std;

char vowel(){
    char user;

    cout << "Enter any character = ";
    cin >> user;

    if (user =='a' || user =='e' || user =='i' || user =='o' || user =='u')
    {
        cout << user << " is vowel.";
    }
    else{
        cout << user << " is consonant.";
    }
  return 0;   
}
int main()
{
    vowel();
}