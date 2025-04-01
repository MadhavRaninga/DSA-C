#include<iostream>
using namespace std;

class student{
    int data=0;

public:
    student(){
       
        cout << "Value is : " << data << endl;
    }
    ~student(){
       
        cout << "Value is deleted !";
    }
};

int main()
{
    student s1;
}