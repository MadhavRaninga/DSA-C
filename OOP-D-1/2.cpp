#include<iostream>
using namespace std;

class student{

    int data;
public:
    student(int user){
        data = user;
        cout << "value is = " << data << endl;
    }
    ~student(){
        cout << "deleted";
    }
};
int main()
{
    int user;
    cout << "Enter the value = ";
    cin >>  user;
    student s1(user);
}