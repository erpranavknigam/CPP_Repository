#include<iostream>
using namespace std;    

int main(){
    int n, m, p, q;
    cin >> n >> m >> p >> q;
    int mat1[n][m], mat2[p][q], ans[n][q];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat1[i][j];
        }
    }

    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cin >> mat2[i][j];
        }
    }


    int row = 0;
    if(m != p){
        cout << "Invalid Matrix Multiplication Operation." << endl;
    } else{
        while(row < n){
            int col = 0;
            while(col < q){
                int sum = 0;
                for(int i = 0; i < m; i++){
                    sum += (mat1[row][i] * mat2[i][col]);
                }
                ans[row][col] = sum;
                col++;
            }
            row++;
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<q; j++){
                cout << ans[i][j] << " ";
            }
        cout << endl;
    }
    }

    
}