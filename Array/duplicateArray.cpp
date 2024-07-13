#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int duplicateArray(int arr[], int n ){
    int i = 0;
    for(int j = 1; j < n; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;


}

int main(){

    int arr1[] = {1,1,2,2,2,3,3,3};
    int n = sizeof(arr1)/sizeof(arr1[0]);
     int k = duplicateArray(arr1,n);
    cout << "After removing duplicate no. "<< endl;
    for(int i = 0; i < k; i++){
        cout << arr1[i]<<" ";
    }





    return 0;
}