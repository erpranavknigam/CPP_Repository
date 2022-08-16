#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int search){
    int start = 0;
    int end = n;
    while(start <= end){
        int mid = (start + end) / 2;

        if(arr[mid] == search){
            return mid;
        } else if(arr[mid] > search){
            end = mid - 1;
        } else{
            start = mid + 1;
        }
    }
    return -1;

}
int main(){
    int n, search, index;
    cout << "Enter length of array: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter element number " << i << ": ";
        cin >> arr[i];
    }
    cout << "Enter Search Key: ";
    cin >> search;
    
    index = binarySearch(arr, n, search);
    if(index == -1){
        cout << "Element not found.";
    } else{
        cout << "Element found at index " << index << ".";
    }
}