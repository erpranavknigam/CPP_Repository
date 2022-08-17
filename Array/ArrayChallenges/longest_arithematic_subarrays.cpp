#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    int arr[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int preDiff = arr[1] - arr[0];
    int ans = 2;
    int j = 2;
    int curr = 2;

    while(j < size){
        if(arr[j] - arr[j-1] == preDiff){
            curr++;
        } else{
            preDiff = arr[j] - arr[j-1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans << endl;

}