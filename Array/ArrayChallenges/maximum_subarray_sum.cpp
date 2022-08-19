#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int size;
    int max = INT_MIN;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    int currsum[size+1];
    currsum[0] = 0;

    for(int i = 1; i <= size; i++){
        currsum[i] = currsum[i-1] + arr[i-1];
    }

    int maxSum = INT_MIN;

    for(int i = 1; i <= size; i++){
        int sum = 0;
        for(int j = 0; j < i - 1; j++){
            sum = currsum[i] - currsum[j];
            max(maxSum, sum);
        }
    }
    cout << maxSum << endl;

}