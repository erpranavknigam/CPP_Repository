#include<iostream>
using namespace std;

int main(){
    int rows;
    int val = 1;
    cin >> rows;
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            cout << val << " ";
            val += 1;
        }
        cout << endl;
    }
}