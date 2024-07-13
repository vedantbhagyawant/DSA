#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 void getmedian(int arr[], int n){
    sort(arr,arr+n);
    if(n % 2 == 0){
        int ind1 = (n/2) - 1;
        int ind2 = (n/2);
        cout<< (double)(arr[ind1] + arr[ind2])/2;
    }
    else{
        cout << arr[(n/2)];
    }

 }



int main(){
    int arr1[] = {4,5,6,7,1,2};
    int n = 6;

    getmedian(arr1,n);

return 0;
}