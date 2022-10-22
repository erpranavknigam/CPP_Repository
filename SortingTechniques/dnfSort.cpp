#include<iostream> 
using namespace std;

void dnfSort(int arr[], int size){
    int low = 0;
    int high = size - 1;
    int mid = 0;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if(arr[mid] == 1){
            mid++;
        } else{
            swap(arr[mid], arr[high]);
            high--;
        }
       
    }
}
int main(){
    int size;
    cin >> size;
    int array[size];
    for(int i=0; i<size;i++){
        cin >> array[i];
    }
    
    dnfSort(array, size);
    for(int i=0; i<size;i++){
        cout << array[i] << " ";
    }
}