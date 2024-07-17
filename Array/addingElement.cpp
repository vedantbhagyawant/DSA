#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void addingElement(int *arr,int n, int value){
    for(int i = n-1; i >= 0; i--){
        arr[i + 1] = arr[i];
    }
    arr[0] = value;
    


}
void insertatEnd(int *arr,int n, int value){
    arr[n] = value;
}



//  step 1 Declaring Main function 
int main(){
    int n = 8;
    int arr[9] = {2,3,4,6,9,10,76,43};
    int value = 60;

    cout << "Element before inserting the element "<<endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " " ;

    }
    cout << endl;

    addingElement(arr,n,value);
    cout << "Element After adding the element "<<endl;
    for(int i = 0; i <= n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    insertatEnd(arr,n,value);
    cout << "After inserting the value at beginnning:"<<endl;
    for(int i = 0; i <=n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;


    return 0;



    

}