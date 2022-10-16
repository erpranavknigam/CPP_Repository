#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;    

void helper(vector<int> a, vector<vector<int>> &ans, int idx){
    if(idx == a.size()){
        ans.push_back(a);
        return;
    }
    for(int i = idx; i < a.size(); i++) {
        if(i != idx && a[i] == a[idx]){
            continue;
        }
        swap(a[i], a[idx]);
        helper(a, ans, idx+1);
    }
}
vector<vector<int>> getPermutations(vector<int> nums){
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    helper(nums, ans, 0);
    return ans;
}

int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(auto &i : arr){
        cin >> i;
    }
    vector<vector<int>> res = getPermutations(arr);

    for(auto v : res){
        for(auto i : v){
            cout << i << " ";
        }
        cout << endl;
    }
}