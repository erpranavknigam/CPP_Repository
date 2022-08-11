#include<iostream>
using namespace std;

int fact(int n){
    int f = 1;
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        for(int i = n; i >= 2; i--){
            f *= i;
        }
    }
    return f;
}

int main(){
    int n;
    cin >> n;

    int ans = fact(n);
    cout << "Factorial of " << n << " is " << ans << endl;
    return 0;
}