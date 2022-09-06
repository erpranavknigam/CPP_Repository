#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    int prefactorial = factorial(n-1);
    return n * prefactorial;
}
int main(){
    int n;
    cin >> n;
    cout << factorial(n);
}