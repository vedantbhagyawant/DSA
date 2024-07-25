#include <iostream>
// #include <bits/stdc++.h>
#include <string>
#include <cctype>
using namespace std;

string removeVowel(string str){
    string result;
    for(char ch : str){
        char lowerch = tolower(ch);
     
  if(lowerch != 'a' && lowerch != 'e' && lowerch != 'i' && lowerch != 'o' && lowerch != 'u'){
    result += ch;
  }
    
}
return result;
}


int main(){
    string str;
    cout << "Enter the String: " <<endl;
    getline(cin , str);

   string modifiedString =  removeVowel(str);
   cout << "The String BEFORE: " << str << endl << " the String After: "<< endl << modifiedString <<endl;
   return 0;
}