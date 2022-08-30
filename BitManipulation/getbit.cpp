#include<iostream>
using namespace std;    

int getBit(int num, int pos){
    return ((num & (1 << pos)) != 0);
}
int main(){
    int pos, num;
    cin >> pos >> num;
    cout << getBit(num, pos);
}