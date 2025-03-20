#include<iostream>
using namespace std;

int reverse(string str){
  string temp;
  for (int i = str.length(); i >= 0; i--)
  {
        temp += str[i];
  }
      cout << temp;
   
}
int main()
{
    string word;

    cout << "Enter any Word :- " ;
    cin >> word;

    reverse(word);
}