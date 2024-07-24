#include <iostream>
#include <cctype>
#include <string>
using namespace std;


bool isVowel(char ch){
     ch = tolower(ch);
     return (ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u');
}


int main(){
    string str;
    int vowels = 0, consonants = 0, whitespace = 0;
    cout << "Enter The String: " <<endl;
    getline(cin ,str);

    for(char ch : str){
        if(isVowel(ch)){
            vowels++;

        }
        else if(isalpha(ch)){
            consonants++;
        }
        else if(isspace(ch)){
            whitespace++;
        }


    }
    cout << "Vowels: " << vowels <<endl;
    cout << "Constants " << consonants <<endl;
    cout << "WhiteSpace " << whitespace <<endl;


return 0;
    
}