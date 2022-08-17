#include<iostream>
using namespace std;


void insertionSort(int *arr, int n){
    for(int i = 1; i < n; i++){
        int current = arr[i];
        int j = i - 1;
        while(arr[j] > current && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
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
    
    insertionSort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}