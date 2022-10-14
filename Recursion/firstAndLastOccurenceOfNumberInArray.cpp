#include<iostream>
using namespace std;

int getFirstOccurance(int arr[], int size, int num, int i){
    if(i == size){
        return -1;
    }
    if(arr[i] == num){
        return i;
    }
    return getFirstOccurance(arr, size, num, i+1);
}

int getLastOccurance(int arr[], int size, int num, int i){
    if(i == size){
        return -1;
    }
    
    int restArray =  getLastOccurance(arr, size, num, i+1);
    
    if(restArray != -1){
        return restArray;
    }
    if(arr[i] == num){
        return i;
    }
    return -1;
}
int main(){
    int size, num, i;
    cin >> size >> num;
    int arr[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int first = getFirstOccurance(arr, size, num, i = 0);
    int last = getLastOccurance(arr, size, num, i = 0);
    cout << "First Occurence: " << first << " Last Occurence: " << last << endl;
}