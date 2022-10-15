#include<iostream>
using namespace std;

void generateSubstrASCII(string str, string ans){
    if(str.length() == 0){
        cout << ans << endl;
        return;
    }
    char ch = str[0];
    int code = ch;
    string ros = str.substr(1);
    generateSubstrASCII(ros, ans);
    generateSubstrASCII(ros, ans + ch);
    generateSubstrASCII(ros, ans + to_string(code));

}
int main(int argc, char** argv){
    string str;
    cin >> str;
    generateSubstrASCII(str, "");
}