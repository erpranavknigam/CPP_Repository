#include<iostream>
#include<vector>

using namespace std;
vector<vector<int>> ans;

void getPermutations(vector<int> &arr, int idx){
        if(idx == arr.size()){
            ans.push_back(arr);
            return;
        }
        for(int i = idx; i < arr.size(); i++){
            swap(arr[i],arr[idx]);
            getPermutations(arr,idx+1);
            swap(arr[i],arr[idx]);
        }
        return;
}
int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(auto &i : arr){
        cin >> i;
    }
    getPermutations(arr, 0);

    for(auto v : ans){
        for(auto i : v){
            cout << i << " ";
        }
        cout << endl;
    }
}