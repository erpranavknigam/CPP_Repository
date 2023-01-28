#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool exist(vector<int> a, int n, int t){
    bool found = false;
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        int lo = i + 1, hi = n-1;
        while(lo < hi){
            int curr = a[i] + a[lo] + a[hi];
            if(curr = t){
                found = true;
            }
            if(curr < t){
                lo++;
            }
            if(curr > t){
                hi--;
            }
        }
    }
    return found;
}
int main(){
    int n = 6;
    int t = 24;
    vector<int> a = {3,6,1,7,12,9};
    cout << exist(a,n,t);
}
