#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int  n = 7;
    int arr[n] = {1,33,4,5,2,77,99};
    map<int , int > mp;
    int tmep = 1;
    int brr[n];

    for(int i = 0; i < n; i++){
        brr[i] = arr[i]; 
    }

    sort(brr, brr + n);

    for(int i = 0; i < n; i ++){
        if(mp[brr[i]] == 0){
        mp[brr[i]] = tmep;
        tmep++;
        }
    }
    
    for(int i = 0; i < n; i++){
        cout  << mp[arr[i]] << " ";
    }

    return 0;
}