#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    int array[size];
    int miniidx = INT_MAX;
    int max = INT_MIN;
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }
    for(int i = 0; i < size; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    int idx[size] = {-1};
    
    for(int i = 0; i < size; i++){
        
        if(idx[array[i]] != -1){
            miniidx = min(miniidx, idx[array[i]]);
        } else{
            idx[array[i]] = i;
        }
    }
    if(miniidx == INT_MAX){
        cout << "-1" << endl;
    } else{
        cout << miniidx + 1 << endl;
    }


}