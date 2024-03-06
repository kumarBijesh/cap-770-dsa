//same code insertion of element in array
#include <iostream>
using namespace std;

void insertElement(int arr[], int& n, int x, int pos) {
    if (n >= 100) {
        cout << "Array size exceeds 100. Cannot insert element.\n";
        return;
    }
    
    if (pos < 0 || pos > n) {
        cout << "Invalid position.\n";
        return;
    }

    if (pos == n) {
        arr[pos] = x;
        n++;
        return;
    }

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = x;
    n++;
}

void displayArray(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100];
    int n, x, pos;

    cout << "Enter the number of elements of the array: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    displayArray(arr, n);

    cout << "Enter the element to be inserted: ";
    cin >> x;

    cout << "Enter the position where element is to be inserted: ";
    cin >> pos;

    insertElement(arr, n, x, pos);

    displayArray(arr, n);

    return 0;
}
