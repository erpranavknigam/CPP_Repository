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
    int n,r;
    cin >> n >> r;

    int val = fact(n) / (fact(r) * fact(n-r));

    cout << n << "C" << r << " is: " << val << endl;
}