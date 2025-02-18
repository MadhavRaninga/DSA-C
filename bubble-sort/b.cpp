#include <iostream>

using namespace std;

int main()
{
    int user;
    cout << "Enter the size of arr = ";
    cin >> user;

    int box[user];

    cout << "-------------------- " << endl;
    for (int i = 0; i < user; i++)
    {
        cin >> box[i];
    }
    cout << "-------------------- " << endl;

    for (int i = 0; i < user; i++)
    {
        cout << box[i] << endl;
    }

    int temp;
    for (int i = 0; i < user - 1; i++)
    {
        for (int j = 0; j < user; j++)
        {
            if (box[j] > box[j + 1])
            {
                temp = box[j];
                box[j] = box[j + 1];
                box[j + 1] = temp;
            }
        }
    }
    cout << "-------------------- " << endl;
    cout << "Ascending Order is " << endl;
    for (int i = 0; i < user; i++)
    {
        cout << box[i] << endl;
    }
}