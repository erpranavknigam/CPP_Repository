#include<bits/stdc++.h>
using namespace std;

string decimalToHexa(int num){
    int x = 1;
    string ans = "";

    while(x <= num){
        x *= 16;
    }
    x /= 16;

    while(x > 0){
        int last_digit = num / x;
        num -= last_digit * x;
        x /= 16;

        if(last_digit <= 9){
            ans = ans + to_string(last_digit);
        } else{
            char c = 'A' + last_digit - 10;
            ans.push_back(c);
        }
    }
    return ans;
} 
int main(){
    int num;
    cin >> num;

    cout << decimalToHexa(num) << endl;
}