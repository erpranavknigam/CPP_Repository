#include<iostream>
using namespace std;

int setBits(int n, int pos){
    return ((n & ( 1 << pos)) != 0);
}
int unique(int arr[], int n){
    int xorsum = 0;
    for(int i = 0; i < n; i++){
        xorsum = xorsum ^ arr[i];
    }
    int setBit = 0;
    int pos = 0;
    int tempxor = xorsum;
    while(setBit != 1){
        setBit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor = 0;
    for(int i = 0; i < n; i++){
        if(setBits(arr[i],pos-1)){
            newxor = newxor ^ arr[i];
        }
    }
    cout << newxor << endl;
    cout << (tempxor ^ newxor) << endl;
}
int main(){
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    unique(array,n);
    
}