#include<iostream>
using namespace std;

int octalToDecimal(int num){
    int ans = 0;
    int x = 1;

    while(num > 0){
        int y = num % 10;
        ans += x * y;
        x *= 8;
        num /= 10;
    }
    return ans;
}
int main(){
    int n;
    cin >> n;

    cout << octalToDecimal(n) << endl;
}