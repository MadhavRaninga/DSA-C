#include <iostream>
using namespace std;

void fact (){
    int size, max;

    cout << "Enter the number of elements: ";
    cin >> size;

    int  box[size];
    
    for (int i = 0; i < size; i++) {
        cout << "box [" << i <<  "] :" ;
        cin >> box[i];
    }
    max = box[0];

    for (int i = 1; i < size; i++) {
        if (box[i] > max) {
            max = box[i];
        }
    }
    cout << "Largest Value = " << max << endl;
}
int main() {
    fact();

}