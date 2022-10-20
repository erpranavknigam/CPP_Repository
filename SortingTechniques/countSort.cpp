#include<iostream>
using namespace std;

void countSort(int arr[], int size){
    int maxi = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }

    int countArr[maxi+1] = {0};

    for(int i = 0; i < size; i++){
        countArr[arr[i]]++;
    }

    for(int i = 1; i <= maxi; i++){
        countArr[i] += countArr[i-1];
    }

    int output[size];
    for(int i = size-1; i >= 0; i--){
        output[--countArr[arr[i]]] = arr[i];
    } 

    for(int i = 0; i < size; i++){
        arr[i] = output[i];
    }

}
int main(){
    int size;
    cin >> size;
    int array[size], output_arr[size];
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }
    countSort(array,size);
    for(int i = 0; i < size; i++){
        cout <<  array[i] << " ";
    }
}