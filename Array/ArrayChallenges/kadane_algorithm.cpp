#include<iostream>
using namespace std;

int main(){
    int size;
    
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int currsum = 0;
    int maxsum = currsum;
    for(int i = 0; i < size; i++){
        currsum += arr[i];
        if(currsum < 0){
            currsum = 0;
        }
        if(currsum > maxsum){
            maxsum = currsum;
        }
    }

    cout << maxsum << endl;
}