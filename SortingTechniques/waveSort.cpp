#include<iostream>
using namespace std;  

void waveSort(int arr[], int n){
    for(int i = 1; i <= n-1;){
        if(arr[i] > arr[i-1]){
            swap(arr[i], arr[i-1]);
        }
        if(arr[i] > arr[i+1] && i <= n-2){
            swap(arr[i], arr[i+1]);
        }
        i += 2;
    }
}
int main(){
    int size;
    cin >> size;
    int array[size];
    for(int i=0; i<size;i++){
        cin >> array[i];
    }
    waveSort(array, size);

     for(int i=0; i<size;i++){
        cout << array[i] << " ";
    }
}