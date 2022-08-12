#include<iostream>
using namespace std;

int decimalToOctal(int num){
    int ans = 0;
    int x = 1;

    while(x <= num){
        x *= 8;
    }

    x /= 8;

    while(x > 0){
        int last_digit = num / x;
        num -= last_digit * x;
        x /= 8;
        ans  = ans * 10 + last_digit;
    }
    return ans;
}
int main(){
    int n;
    cin >> n;

    cout << decimalToOctal(n) << endl;
}