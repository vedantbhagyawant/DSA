#include <iostream>
#include <bits/stdc++.h>
using namespace std;


 int  bsearch(int elem ,int arr[], int n ){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = (start + end)/2;
        if(arr[mid] == elem)
        return true;
        else if(arr[mid] <elem)
        start = mid + 1;
        else end = mid - 1;

    }
    return false;

 }

 int isSubset(int arr1[], int arr2[], int m , int n){
    sort(arr2, arr2+n);
    if(m > n) {
        return false;
    }
    for(int i = 0; i < m; i++){
        bool present = bsearch(arr1[i],arr2,n);
        if(present == false) return false;
    }

 }




int main(){

    int arr1[] = {2,3,4,8};
    int arr2[] = {1,2,3,4,4,5,6,7};

    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

    bool ans = isSubset(arr1,arr2,m,n);
    if(ans == true){
        cout << "Array1 is the subset of arr2"<<endl;
    }
    else{
        cout << "Array 1 is not a subset";
    }


    return 0;
}