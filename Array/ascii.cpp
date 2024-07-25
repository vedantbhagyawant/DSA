#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    char ch;

    cout << "Enter the char: "<<endl;

    cin >> ch;

    int charValue = static_cast<int>(ch);

    cout << "The ASCII code for " << ch << " is " << charValue <<endl;


    return 0;
}