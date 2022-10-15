#include<iostream>
using namespace std;

void generateSubStrings(string str, string ans){
    
    if(str.length() == 0){
        cout << ans << endl;
        return;
    }
    char ch = str[0];
    string ros = str.substr(1);
    generateSubStrings(ros, ans);
    generateSubStrings(ros, ans + ch);


}
int main(int argc, char** argv){
    string str;
    cin >> str;
    generateSubStrings(str, "");
}