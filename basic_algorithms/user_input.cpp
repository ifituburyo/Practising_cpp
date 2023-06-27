#include <iostream>
#include <string>

using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    // Create a dynamic array of strings
    string* arr = new string[size];

    // Accept input for each element of the array
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    int index;
    string subarray;

    cout << "Enter the index where you want to insert the subarray: ";
    cin >> index;

    cout << "Enter the subarray: ";
    cin >> subarray;

    // Resize the array to accommodate the subarray
    size += subarray.length();

    string* newArr = new string[size];

    // Copy the elements up to the insertion index
    for (int i = 0; i < index; i++) {
        newArr[i] = arr[i];
    }

    // Insert the subarray
    for (int i = 0; i < subarray.length(); i++) {
        newArr[index + i] = subarray[i];
    }

    // Copy the remaining elements after the insertion index
    for (int i = index; i < size - subarray.length(); i++) {
        newArr[i + subarray.length()] = arr[i];
    }

    // Print the updated array
    cout << "Updated Array: ";
    for (int i = 0; i < size; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    // Free the memory allocated for the arrays
    delete[] arr;
    delete[] newArr;

    return 0;
}
