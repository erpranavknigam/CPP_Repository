#include<iostream>
using namespace std;    

int main(){
    int n, m, element, num;
    cin >> n >> m >> element;
    int mat[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }

    int row = 0, col = m-1;
    bool found = false;
    while(row < n && col >= 0){
        if(mat[row][col] == element){
            found = true;
        }
        if(mat[row][col] > element){
            col--;
        } else{
            row++;
        }
    }
    if(found){
        cout << "Element found";
    } else{
        cout << "Element not found";
    }
}