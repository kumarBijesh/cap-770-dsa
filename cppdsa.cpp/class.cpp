//taking array 100,we take input from user under100 and after that we have to insert arr after  that find the range 
//and we have to add other and in any position under the array
#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int i, n, x, pos;

    cout << "Enter the number of elements of the array: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Input array elements are:\n";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nEnter the element to be inserted: ";
    cin >> x;

    cout << "Enter the position where element is to be inserted: ";
    cin >> pos;

    if (n >= 100) {
        cout << "This is out of the range";
    } else {
        n = n + 1;
        for (i = n - 1; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = x;

        cout << "Array after the insertion:\n";
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\nThis is under the range";
    }

    return 0;
}
