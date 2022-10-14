#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    if(n == 1){
        return true;
    }
    bool restArray = isSorted(arr+1, n-1);
    return ((arr[0] < arr[1]) && restArray);
}
int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    bool ok = isSorted(arr, size);
    cout << ok;
}