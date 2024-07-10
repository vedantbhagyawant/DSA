#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Frequency(int arr[], int n){
    unordered_map <int,int> map;
    for(int i = 0; i < n; i++){
        map[arr[i]]++;
    }
    for(auto x: map){

    cout << "First " << x.first << " Second " << x.second<<endl;

    }
}
int main(){

    int arr1[] = {10,5,10,4,5,4,8};
    int n = sizeof(arr1)/sizeof(arr1[0]);

    Frequency(arr1, n);


    return 0;
}
