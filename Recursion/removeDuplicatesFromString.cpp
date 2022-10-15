#include<iostream>
using namespace std;

string removeDuplicates(string str){
    if(str.length() == 0){
        return "";
    }
    char ch = str[0];
    string ans = removeDuplicates(str.substr(1));
    if(ch == ans[0]){
        return ans;
    } else{
        return ch+ans;
    }
}
int main(int argc, char** argv){
    string str;
    cin >> str;
    string newStr = removeDuplicates(str);
    cout << newStr << endl;
}