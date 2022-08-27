#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    
    //convert to uppercase
    for(int i = 0; i < str.size(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
    }
    cout << str << endl;

    //convert to lowercase
    for(int i = 0; i < str.size(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }
    cout << str << endl;

    //Using in-build functions

    getline(cin, str);
    
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << endl;
}