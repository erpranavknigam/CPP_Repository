#include<iostream>
#include<vector>
#include<string>

using namespace std;

int longestSubStr(string str){
    vector<int> dict(256,-1);
    int maxlen = 0, start = -1;

    for(int i = 0; i < str.size(); i++){
        if(dict[str[i]] > start){
            start = dict[str[i]];
        }
        dict[str[i]] = i;
        maxlen = max(maxlen, i-start);
    }
    return maxlen;
}
int main(){
    string str;
    cin >> str;

    int res = longestSubStr(str);
    cout << res;
}