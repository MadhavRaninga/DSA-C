#include <iostream>
using namespace std;

class a {
public:
    void plus(int a, int b)
    {
        cout << "Sum = " << a + b << endl;
    }
};

class b : public a
{
public:
    void plus(int a, int b)
    {
        cout << "Minus = " << a - b << endl;
    }
};
int main()
{
    a obj1;
    b obj2;
    obj1.plus(10, 5);
    obj2.plus(20, 5);
}