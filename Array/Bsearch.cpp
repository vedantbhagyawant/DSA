#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int bsearch(int arr[], int size, int key) {
     // Sort the array first
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;  // Correct calculation of mid
        
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;  // Return -1 if the element is not found
}

int main() {
    int arr[] = {7, 2, 5, 9, 12, 52};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    sort(arr, arr + size); 

    int index = bsearch(arr, size, key);
    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found in array" << endl;

    return 0;
}
