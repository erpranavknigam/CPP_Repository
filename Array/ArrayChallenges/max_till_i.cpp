#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    int arr[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int max = INT_MIN;

    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        cout << "Max till " << i << " is: " << max << endl;
    }
}