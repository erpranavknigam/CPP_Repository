#include<iostream>
using namespace std;

int main(){
    int size;
    int max = INT_MIN;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            int sum = 0;
            for(int k = i; k <= j; k++){
                sum += arr[k];
            }
            if(sum > max){
                max = sum;
            }
            
        }
        
    }
    cout << max;
}