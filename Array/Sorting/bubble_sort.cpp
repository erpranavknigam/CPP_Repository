#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = *a;
}

void bubbleSort(int *arr, int n){

    int counter = 1;
    while(counter < n){
        for(int i = 0; i < n - counter; i++){
            if(arr[i] > arr[i + 1]){
                swap(arr[i], arr[i + 1]);
            }
        }
        counter++;
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
    
    bubbleSort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}