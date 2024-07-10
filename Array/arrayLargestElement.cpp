#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int findingLargestElement(int arr[],int n){
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        
    }
    return max;
}

int main(){

    int arr1[] = {12,54,78,32,23};
    int n = 5;
    cout << "The largest no in the array is "<<findingLargestElement(arr1,n);




    return 0;
}