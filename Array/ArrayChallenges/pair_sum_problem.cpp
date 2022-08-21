#include<iostream>
using namespace std;

bool pairSum(int arr[], int n, int k){
    int low = 0, high = n - 1;
    
    while(low < high){
        if(arr[low] + arr[high] == k){
            cout << low << " " << high << endl;
            return true;
        } else if(arr[low] + arr[high] > k){
            high--;
        } else{
            low++;
        }
    }
    return false;
}
int main(){
    int size, k;
    
    cin >> size >> k;
    int arr[size];
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    bool tF = pairSum(arr, size, k);
}