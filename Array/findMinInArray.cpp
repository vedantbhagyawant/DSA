#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

//  Sorting Code with vector
int sortArr(vector<int> &arr){
    sort(arr.begin(), arr.end());
    return arr[0];
}

// main program 

int main(){

    vector<int> arr1 = {21,34,5,7,26};
    vector<int> arr2 = {23,7,87,0,2};

    cout << "The smallest no. is" << sortArr(arr1)<<endl;
    cout << "The smallest no. is" << sortArr(arr2)<<endl;




    return 0;
}