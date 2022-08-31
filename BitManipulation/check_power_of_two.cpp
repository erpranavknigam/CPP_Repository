#include<iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    if(num != 0){
        int new_num = num - 1;
        if((num & new_num) == 0){
            cout << "Num is power of two.";
        } else{
            cout << "Num is not power of two.";
        }
    }
}