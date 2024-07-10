// Step 1: Importing the libraries 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Step 2: declare a function 

 void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i];
    }
 }

 void reverseArray(int arr[], int start , int end){
    if(start < end){
        swap(arr[start], arr[end]);
        reverseArray(arr,start+ 1, end - 1);
    }
 }

 int main() {

    int arr1[] = {5,4,3,2,1};
    int n = 5;
    reverseArray(arr1,0, n-1);
    printArray(arr1,n);
   




    return 0;
 }

