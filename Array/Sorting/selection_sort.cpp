#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = *a;
}
void selectionSort(int *arr, int n){
    for(int i=0; i< n - 1; i++) {
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[i]){
                swap(arr[j], arr[i]);
            }
        }
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
    
    selectionSort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}