#include <iostream>
using namespace std;

const int MAX = 100;
int arr[MAX];
int n;

void inputArray();
void displayArray();
void reverseArray();

int main() {
    inputArray();

    cout << "\nOriginal Array: ";
    displayArray();

    reverseArray();

    cout << "Reversed Array: ";
    displayArray();

    return 0;
}

void inputArray() {
    cout << "Enter number of elements: ";
    cin >> n;

    if (n > MAX) {
        cout << "Size exceeds limit (" << MAX << "). Setting size to " << MAX << ".\n";
        n = MAX;
    }

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void displayArray() {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void reverseArray() {
    int start = 0, end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
