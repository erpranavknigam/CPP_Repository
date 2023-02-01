#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int longestConsecutiveOnes(vector<int> a, int k){
    int zerocnt = 0, i = 0, ans = 0;
    for(int j = 0; j < a.size(); j++){
        if(a[j] == 0){
            zerocnt++;
        }
        while(zerocnt > k){
            if(a[i] == 0){
                zerocnt--;
            }
            i++;
        }
        ans = max(ans, j-i+1);
        
    }
    return ans;
}
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &i: a){
        cin >> i;
    }
    int res = longestConsecutiveOnes(a, k);
    cout << res;
}