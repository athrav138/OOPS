#include <iostream>
using namespace std;

void ascen(int arr[], int n, int key);
void descen(int arr[], int n, int key);

int main() {
    int n, key;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the array elements (sorted in ascending or descending order): \n";
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "Enter key to search: ";
    cin >> key;

    if (n == 1) {
        if (arr[0] == key)
            cout << "The key is found at index 0\n";
        else
            cout << "The element is not found in array\n";
        return 0;
    }

    if (arr[0] < arr[1]) {
        ascen(arr, n, key);
    } else if (arr[0] > arr[1]) {
        descen(arr, n, key);
    } else {
        cout << "The array is not sorted properly or all elements are same.\n";
    }

    return 0;
}

void ascen(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid, count = 0;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << "The key is found at index " << mid << "\n";
            count++;
            break;
        } else if (arr[mid] > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (count == 0) {
        cout << "The element is not found in array\n";
    }
}

void descen(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid, count = 0;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << "The key is found at index " << mid << "\n";
            count++;
            break;
        } else if (arr[mid] < key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (count == 0) {
        cout << "The element is not found in array\n";
    }
}
