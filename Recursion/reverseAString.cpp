#include<iostream>
#include<string.h>
using namespace std;

void reverseString(string name){
    if(name.length() == 0){
        return;
    }
    string ros = name.substr(1);
    reverseString(ros);
    cout << name[0];
}
int main(){
    string name;
    cin >> name;
    reverseString(name);
}