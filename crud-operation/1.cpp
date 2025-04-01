#include <iostream>
using namespace std;

void insert(int &size, int box[]) {
    int val, pos;
    
    if (size == 0) {
        cout << "Enter the value = ";
        cin >> val;
        box[0] = val;
        size++;
    } else {
        cout << "Enter position (0 to " << size << ") = ";
        cin >> pos;

        if (pos >= 0 && pos <= size) {
            cout << "Enter the value = ";
            cin >> val;

            // Shifting elements to the right
            for (int i = size; i > pos; i--) {
                box[i] = box[i - 1];
            }

            // Insert the new value
            box[pos] = val;
            size++;
        } else {
            cout << "Invalid position!\n";
        }
    }
}

void read(int box[], int size) {
    cout << "Array Elements: ";
    for (int i = 0; i < size; i++) {
        cout << box[i] << " ";
    }
    cout << endl;
}

int main() {
    int size = 0;
    int box[100];  // Using a fixed-size array

    insert(size, box);
    read(box, size);

}
