#include <iostream>
using namespace std;

const int MAX = 100;
int arr[MAX];
int n;

void inputArray();
void displayArray();
void removeDuplicates();

int main() {
    inputArray();
    cout << "\nOriginal Array: ";
    displayArray();

    removeDuplicates();

    cout << "\nArray after removing duplicates: ";
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

void removeDuplicates() {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; ) {
            if (arr[i] == arr[j]) {
                
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; 
            } else {
                j++; 
            }
        }
    }
}
