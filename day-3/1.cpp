#include <iostream>

using namespace std;

int main()
{

    int user;
    float num , sum = 0, average, total;

    cout << "Enter Your Units = ";
    cin >> user;

    if (user <= 50)
    {
        num = user * 0.50;
        cout << num << endl;
    }
    else if (user <= 150)
    {
        num = (50 * 0.5) + ((user - 50) * 0.75);
        cout << num << endl;
    }
    else if (user <= 300)
    {
        num = (50 * 0.5) + (100 * 0.75) + ((user - 150) * 1.20);
        cout << num << endl;
    }
    else
    {
        num = (50 * 0.5) + (100 * 0.75) + (150 * 1.20) + ((user - 300) * 1.50);
        cout << "Total sum = " << num << endl;
    }
    average = (num * 20) / 100;
    cout << "tax value is = " << average << endl;

    total = num + average;
    cout << "Total payable Amount = " << total;
}