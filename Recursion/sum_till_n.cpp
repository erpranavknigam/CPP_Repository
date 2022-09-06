#include<iostream>
using namespace std;

int sum(int n){
    if(n == 0){
        return 0;
    }
    int preSum = sum(n-1);
    return n + preSum;
}
int main(){
    int n;
    cin >> n;
    cout << sum(n);
}