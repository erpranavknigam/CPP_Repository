#include<iostream>
using namespace std;


int fact(int n){
    int f = 1;
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        for(int i = n; i >= 2; i--){
            f *= i;
        }
    }
    return f;
}

int binomial(int n, int r){
    int val = fact(n) / (fact(r) * fact(n-r));
    return val;
}
int main(){
    int rows;

    cin >> rows;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j <= i; j++){
            cout << binomial(i, j) << " ";
        }
        cout << endl;
    }
}