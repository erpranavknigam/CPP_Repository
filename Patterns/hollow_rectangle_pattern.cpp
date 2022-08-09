#include<iostream>
using namespace std;
int main(){
    int rows, cols;
    cin >> rows >> cols;

    for(int i = 1; i <= rows; i++){
        if(i == 1 || i == rows){
            for(int j =1; j <= cols; j++){
                cout << "*  ";
            }
        } else{
            for(int j = 1; j <= cols; j++){
                if(j == 1 || j == cols){
                    cout << "*  ";
                } else{
                    cout << "   ";
                }
            }
        }
        cout << "\n";
    }
}