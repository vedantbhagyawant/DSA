#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n = 6;
    int arr1[] = {2,3,5,7,9,10};
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += (double)arr1[i];
    }

   cout << "The addition of element in the array is " << sum;




    return 0;


}