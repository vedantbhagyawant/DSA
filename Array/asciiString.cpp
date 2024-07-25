#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    string str;
    int sum = 0;
    cout << "Enter the String: " <<endl;

    getline(cin , str);
    // cout << str;

    for(char ch  : str ){
        int asciiValue = static_cast<int>(ch);
        sum += int(ch);
        
         
    }
    
        cout << "The sum of the String " << str << " is " << sum << endl;

    return 0;
}