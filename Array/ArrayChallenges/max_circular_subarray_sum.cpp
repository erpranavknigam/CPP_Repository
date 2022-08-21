#include<iostream>
using namespace std;

int kadaneAlgorithm(int arr[], int n){
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i = 0; i < n; i++){
        currSum += arr[i];
        if(currSum < 0){
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
   
    return maxSum;
}
int main(){
    int size;
    
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int wrapsum;
    int nonwrapsum;
    int totalSum = 0;
    nonwrapsum = kadaneAlgorithm(arr, size);
    // cout << "nonwrapsum: " << nonwrapsum << endl;
    for(int i = 0; i < size; i++){
        totalSum += arr[i];
        arr[i] = -arr[i];
        // cout << arr[i] << " ";
    }
    // cout << endl;
    // cout << "total sum: " << totalSum << endl;
    wrapsum = totalSum + kadaneAlgorithm(arr, size);
    // cout << "wrapsum: " << wrapsum << endl;
    cout << max(wrapsum, nonwrapsum) << endl;
}