#include<iostream>
using namespace std;

string moveAllX(string str){
    if(str.length() == 0){
        return "";
    }
    char c = str[0];
    string ans = moveAllX(str.substr(1));
    if(c == 'X' || c == 'x'){
        return ans + c;
    }
    else{
        return c + ans;
    }
}
int main(int argc, char** argv){
    string str;
    cin >> str;
    string newStr = moveAllX(str);
    cout << newStr << endl;
}