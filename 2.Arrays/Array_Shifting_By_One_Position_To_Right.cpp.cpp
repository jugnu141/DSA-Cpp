#include <iostream>
using namespace std;

void rotateRight(int arr[], int n) {
    // Store the last element
    int last = arr[n - 1];
    
    // Shift all elements to the right by one position
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Move the last element to the first position
    arr[0] = last;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {0, 1, 1, 1, 0, 1, 0, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    // Rotate the array to the right by one position
    rotateRight(arr, size);

    cout << "Rotated array: ";
    printArray(arr, size);

    return 0;
}
