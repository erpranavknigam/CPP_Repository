#include<iostream>
using namespace std;

int reverse(int n){
    int ans = 0;
    while(n > 0){
        int last_digit = n % 10;
        ans = ans * 10 + last_digit;
        n /= 10;
    }
    return ans;
}
int addBinary(int a, int b){
    int sum = 0;
    
    int preCarry = 0;

    while(a > 0 && b > 0){
        if(a % 2 == 0 && b % 2 == 0){
            sum = sum * 10 + preCarry;
            preCarry = 0;
        } else if((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0)){
            if(preCarry == 1){
                sum = sum * 10 + 0;
                preCarry = 1;
            } else{
                sum = sum * 10 + 1;
                preCarry = 0 ;
            }
        } else{
            sum = sum * 10 + preCarry;
            preCarry = 1;
        }
        a /= 10;
        b /= 10;
    }

    while(a > 0){
        if(preCarry == 1){
            if(a % 2 == 1){
                sum = sum * 10 + 0;
                preCarry = 1;
            } else{
                sum = sum * 10 + 1;
                preCarry = 0;
            }
        } else{
            sum = sum * 10 + (a % 2);
            preCarry = 0 ;
        }
        a /= 10;
    }

    while(b > 0){
        if(preCarry == 1){
            if(b % 2 == 1){
                sum = sum * 10 + 0;
                preCarry = 1;
            } else{
                sum = sum * 10 + 1;
                preCarry = 0;
            }
        } else{
            sum = sum * 10 + (b % 2);
            preCarry = 0 ;
        }
        b /= 10;
    }

    if(preCarry == 1) {
        sum = sum * 10 + 1;
    }

    sum = reverse(sum);
    return sum;
}
int main(){
    int num1, num2;

    cin >> num1 >> num2;

    cout << addBinary(num1, num2) << endl;
}