#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> arr = {23,1,4,2,54,76,98,56};
    int n = 8;
   sort(arr.begin(),arr.end());
   for(int i = 0; i < n/2;i++){
    cout << arr[i]<<" ";
   }
   for(int i = n-1; i >= n/2; i--){
    cout << arr[i]<<" ";

   }
   return 0;



}