#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n, search, index;
    cout << "Enter length of array: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter element number " << i << ": ";
        cin >> arr[i];
    }
    cout << "Enter Search Key: ";
    cin >> search;
    
    index = linearSearch(arr, n, search);
    if(index == -1){
        cout << "Element not found.";
    } else{
        cout << "Element found at index " << index << ".";
    }
}