#include<iostream>
using namespace std;

int main(){
    int size, sum;
    cin >> size >> sum;
    
    int array[size];
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }
    int add = array[0];
    int rem = 0;
    int x = 0;
    int j = 1;
    while(j < size && add + array[j] <= sum){
        add += array[j];
        j++;
    }
    if(sum == add){
        cout << "Correct";
        return 0;
    }
    while(x < size){
        add += array[x];
        while(add > sum){
            add -= array[rem];
            rem++;
        }
        if(add == sum){
            break;
        }
        
        x++;
    }
    if(add != sum){
        cout << "-1";
    } else{
        cout << "Correct";
    }
    // cout << "No subarray with given sum found." << endl;
   
}