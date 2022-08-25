#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    cin >> str;
    cout << str << endl;

    string str1(5,'p');
    cout << str1 << endl;

    string str2 = "Pranav";
    cout << str2 << endl;

    string str3;
    getline(cin, str3);
    cout << str3 << endl;
}