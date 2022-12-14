#include<iostream>
using namespace std;

bool isSafe(int** arr, int x, int y, int n){
    if(x < n && y < n && arr[x][y] == 1){
        return true;
    }
    return false;
}

bool ratInMaze(int** arr, int x, int y, int n, int** solArr){

    if(x == n-1 && y == n-1){
        solArr[x][y] = 1;
        return true;
    }

    if(isSafe(arr,x,y,n)){
        solArr[x][y] = 1;
        if(ratInMaze(arr,x+1,y,n,solArr)){
            return true;
        }
        if(ratInMaze(arr,x,y+1,n,solArr)){
            return true;
        }
        solArr[x][y] = 0;
        return false;
    }
    return false;
}
int main(){
    int size;
    cin >> size;
    int** arr = new int*[size];
    for(int i =0; i < size; i++){
        arr[i] = new int[size];
    }

    for(int i =0; i < size; i++){
        for(int j =0; j < size; j++){
            cin >> arr[i][j];
        }
    }

    int** solArr = new int*[size];
    for(int i =0; i < size; i++){
        solArr[i] = new int[size];
        for(int j =0; j < size; j++){
            solArr[i][j] = 0;
        }
    }
    if(ratInMaze(arr,0,0,size,solArr)){
        for(int i =0; i < size; i++){
            for(int j =0; j < size; j++){
                cout << solArr[i][j];
            }
            cout << endl;
        }
    } else{
        cout << "No path found";
    }
}