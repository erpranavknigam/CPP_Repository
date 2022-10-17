#include<iostream>
#include<algorithm>
using namespace std;

int partition(int arr[], int l, int r){
    int pivot = arr[r];
    int i = l -1;
    for(int j = l; j <= r-1; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        } 
    }
    swap(arr[i+1], arr[r]);
    return i + 1;
}
void quickSort(int arr[], int l, int r){
    if(l < r){
        int pi = partition(arr, l , r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}
 int main(){
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    quickSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}