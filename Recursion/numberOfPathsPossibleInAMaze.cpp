#include<iostream>
using namespace std;

int countPaths(int size, int i, int j){

    if(i == size-1 && j == size-1){
        return 1;
    }
    if(i >= size || j >= size){
        return 0;
    }
    
    return countPaths(size, i+1, j) + countPaths(size, i, j+1);
    
}
int main(){
    int size;
    cin >> size;
    int count = countPaths(size, 0, 0);
    cout << count << endl;
}