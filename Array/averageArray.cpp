#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 void findAverage(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
       sum = (sum + arr[i]); 
    }
    double average = sum/n;
    cout << "The average is "<< average;

 }

int main(){

    int arr1[] = {2,3,4,5,7,8};
    int n = 6;
    int sum = 0;

    findAverage(arr1, n);





    return 0;
}