#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class removeDuplicate{
    public:
    void removeElement(int arr[], int n){
        map<int,int> mp;
        for(int i = 0; i<n; i++){
            if(mp.find(arr[i])== mp.end())
            cout<<arr[i] << " ";
            mp[arr[i]]++;
        }

     }


};


int main(){
    
    int arr1[] = {4,3,9,2,4,1,10,89};
    int n = 8;
    
    removeDuplicate r1;
    r1.removeElement(arr1,n);




    return 0;
}