#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool myCompare(pair<int, int> p1, pair<int, int> p2){
    return p1.first < p2.first;
}
int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    vector<pair<int, int>> v;

    for(int i = 0; i < size; i++){
        v.push_back(make_pair(arr[i], i));
    }

    sort(v.begin(),v.end(), myCompare);

    for(int i = 0; i < size; i++){
        arr[v[i].second] = i;
    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

}