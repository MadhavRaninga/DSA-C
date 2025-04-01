#include<iostream>
using namespace std;

class student{
public:
    int data;

     
     student(int a){
        data = a;
     }
     student(const student &a){
        data = a.data;
        cout << data << endl;
     }
     ~student(){
        cout << "deleted" << endl;
     }
};

int main()
{
    student s1(10);
    student s2(s1);

}