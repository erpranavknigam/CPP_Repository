#include<iostream>
using namespace std;

int setBit(int pos, int num){
    return (num | (1 << pos)) ;
}
int main(){
    int pos, num;
    cin >> pos >> num;
    cout << setBit(pos,num);
}