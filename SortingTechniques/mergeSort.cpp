#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1], b[n2];

    for(int i = 0; i < n1; i++){
        a[i] = arr[l + i];
    }


    for(int j = 0; j < n2; j++) {
        b[j] = arr[mid + 1 + j];
    }

    
    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2){
        if(a[i] <= b[j]){
            arr[k] = a[i];
            i++;
        } else{
            arr[k] = b[j];
            j++;
        }
        k++;
        while(i < n1){
            arr[k] = a[i];
            i++;
            k++;
        }

        while(j < n2){
            arr[k] = b[j];
            j++;
            k++;
        }
    }
}
void mergeSort(int arr[], int l, int r){
    if(l < r){
        int mid = l + (r - l)/ 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    mergeSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}