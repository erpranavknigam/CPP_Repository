#include<iostream>
using namespace std;

int decimalToBinary(int num){
    int ans = 0;
    int x = 1;

    while(x <= num){
        x *= 2;
    }

    x /= 2;

    while(x > 0){
        int last_digit = num / x;
        num -= last_digit * x;
        x /= 2;
        ans  = ans * 10 + last_digit;
    }
    return ans;
}
int main(){
    int n;
    cin >> n;

    cout << decimalToBinary(n) << endl;
}