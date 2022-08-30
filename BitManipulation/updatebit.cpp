#include<iostream>
using namespace std;

int updateBit(int num, int pos, int value){
       int mask = ~(1 << num);
       num = num & mask;
       return (num | (value << pos));
}

int main(){
    int pos, value, num;
    cin >> pos >> value >> num;
    cout << updateBit(num, pos, value);
}