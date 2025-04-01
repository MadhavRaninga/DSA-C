#include<iostream>
using namespace std;

class students{
public :
    string name;
    int age;
    int standard;
    char grade;

    void friends(string name , int age , int standard , char grade){
         this-> name = name;
         this-> age = age;
         this-> standard =standard;
         this-> grade = grade;

         cout << "|---------------------------------" << endl;
         cout << "| Name : " << this-> name << endl;
         cout << "| Age : " << this-> age << " year" <<  endl;
         cout << "| Standard : " << this-> standard << "th" << endl;
         cout << "| Grade : " << this-> grade << endl;
         cout << "|---------------------------------" << endl;
    }
    void school(){
         cout << "|---------------------------------" << endl;
         cout << "| Name : " << this-> name << endl;
         cout << "| Age : " << this-> age << " year" <<  endl;
         cout << "| Standard : " << this-> standard << "th" << endl;
         cout << "| Grade : " << this-> grade << endl;
         cout << "|---------------------------------" << endl;
    }
};
int main()
{
    students madhav, krish , bhavik , bhavdeep;

    madhav.friends("Madhav Raninga" , 19 , 12 , 'A');
    krish.friends("Krish Vadodara" , 18 , 11 , 'A');
    bhavik.friends("Bhavik Sirvi" , 19 , 10 , 'A');
    bhavdeep.friends("Bhavdeep Vaghasiya" , 20 , 12 , 'A');

    madhav.school();
    krish.school();
    bhavik.school();
    bhavdeep.school();
}