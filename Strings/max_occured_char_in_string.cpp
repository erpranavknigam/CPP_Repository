#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int count[26];
    string str;
    getline(cin, str);
    for(int i = 0; i < 26; i++){
        count[i] = 0;
    }
    for(int i = 0; i < str.size(); i++){
        count[str[i] - 'a']++;
    }
    int max = 0;
    char ans = 'a';
    for(int i = 0; i < 26; i++){
        if(count[i] > max){
            max = count[i];
            ans = i + 'a';
        }
    }
    cout << "Max frequent is: " << ans << " with frequent count: " << max << endl;
}