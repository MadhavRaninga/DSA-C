#include <iostream>

using namespace std;



int main() {
    int SIZE;
    int arr[SIZE];  // Array to store data
    int count = 0;  // Number of elements in array
    int choice;

    do {
        cout << "\n*** CRUD Operations using Array ***\n";
        cout << "1. Create (Add Elements)\n";
        cout << "2. Read (View Elements)\n";
        cout << "3. Update (Modify Elements)\n";
        cout << "4. Delete (Remove Elements)\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {  // Create
                int n;
                cout << "How many numbers do you want to insert? ";
                cin >> n;

                if (count + n > SIZE) {
                    cout << "Not enough space in the array!\n";
                    break;
                }

                for (int i = 0; i < n; i++) {
                    cout << "Enter number " << (i + 1) << ": ";
                    cin >> arr[count];
                    count++;
                }

                cout << "Numbers added successfully!\n";
                break;
            }

            case 2: {  // Read
                if (count == 0) {
                    cout << "Array is empty! Nothing to display.\n";
                    break;
                }

                cout << "Array elements: ";
                for (int i = 0; i < count; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
            }

            case 3: {  // Update
                if (count == 0) {
                    cout << "No elements to update! Please add elements first.\n";
                    break;
                }

                int n, index, newValue;
                cout << "How many elements do you want to update? ";
                cin >> n;

                for (int i = 0; i < n; i++) {
                    cout << "Enter index to update (0 - " << count - 1 << "): ";
                    cin >> index;

                    if (index < 0 || index >= count) {
                        cout << "Invalid index! Must be between 0 and " << count - 1 << ". Skipping...\n";
                        continue;
                    }

                    cout << "Enter new value: ";
                    cin >> newValue;
                    arr[index] = newValue;
                    cout << "Value at index " << index << " updated successfully!\n";
                }
                break;
            }

            case 4: {  // Delete
                if (count == 0) {
                    cout << "No elements to delete! Please add elements first.\n";
                    break;
                }

                int n, index;
                cout << "How many elements do you want to delete? ";
                cin >> n;

                for (int i = 0; i < n; i++) {
                    cout << "Enter index to delete (0 - " << count - 1 << "): ";
                    cin >> index;

                    if (index < 0 || index >= count) {
                        cout << "Invalid index! Must be between 0 and " << count - 1 << ". Skipping...\n";
                        continue;
                    }

                    for (int j = index; j < count - 1; j++) {
                        arr[j] = arr[j + 1]; // Shift elements left
                    }
                    count--;
                    cout << "Element at index " << index << " deleted successfully!\n";
                }
                break;
            }

            case 5:
                cout << "Exiting program...\n";
                return 0;

            default:
                cout << "Invalid choice! Please enter a number between 1 and 5.\n";
        }
    } while (true);

    return 0;
}
