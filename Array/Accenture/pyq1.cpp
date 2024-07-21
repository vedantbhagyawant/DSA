#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int sumDifference(int m, int n ){
    int divisible = 0;
    int notdivisible = 0;

    for(int i = 0; i <= n; ++i){
        if(i % m == 0){
            divisible += i;
        }
        else{
            notdivisible += i;
        }
    }
    int differnce = notdivisible - divisible;
    return differnce;
}




int main(){

    int m = 6;
    int n = 30;

  int q =  sumDifference(m,n);
  cout << "The Difference between the non divisible and divisible term is " << q;




    return 0;
}