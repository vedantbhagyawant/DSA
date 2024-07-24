#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int oddeven(int arr[],int size){
    vector<int> even;
    vector<int> odd;


    for(int i = 0; i <= size-1; i++){
        if(i % 2 == 0){
            even.push_back(arr[i]); 
        }
        else{
            odd.push_back(arr[i]);

        }
    }
    
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());

    int value = even[1] + odd[1];

    return value;
    

       
}

int main(){
    int arr[] = {3,2,1,7,5,4};
    int size = sizeof(arr)/ sizeof(arr[0]);

    int output = oddeven(arr,size);
    cout<< "The adding of the second largest and second smallest element is "<< output;



    return 0;
}