#include<iostream>
using namespace std;

int clearBit(int pos, int num){
    return (num & (~(1 << pos)));   
}

int main(){
    int pos, num;
    cin >> pos >> num;
    cout << clearBit(pos, num);
}