#include<iostream>
using namespace std;

int main(){
    int rows;
    cin >> rows;
    int j;
    for(int i = 1; i <= rows; i++){
        for(j = 1; j <= rows-i; j++){
            cout << "   ";
        }
        for(int k = 1; k <= rows - j + 1; k++){
            cout << "*  ";
        }
        cout << endl; 
    }
}