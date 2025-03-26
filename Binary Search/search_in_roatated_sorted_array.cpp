#include <iostream>
using namespace std;

int getPivot(int* arr, int n) {
    int s = 0, e = n - 1;
    int m = s + (e - s) / 2;

    while (s < e) {
        if (arr[m] >= arr[0]) {
            s = m + 1;
        } else {
            e = m;
        }
        m = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(int* arr, int s, int e, int key) {
    int start = s, end = e;
    int mid = start + (end - start) / 2;

    while (start <= end) {
        if (arr[mid] == key) {
            return mid;  // Return index instead of key
        }
        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1; // Element not found
}

int search(int* arr, int n, int key) {
    int pivot = getPivot(arr, n);

    // Check in which part of the array the key lies
    if (key >= arr[pivot] && key <= arr[n - 1]) {
        return binarySearch(arr, pivot, n - 1, key);
    } else {
        return binarySearch(arr, 0, pivot - 1, key); // Fix range
    }
}

int main() {
    int arr[] = {7, 8, 9, 1, 2, 3, 4, 5, 6}; // Rotated sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    
    int result = search(arr, n, key);
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}
