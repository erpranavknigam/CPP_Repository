#include<iostream>
using namespace std;

int main(){
    int num, new_num = 0;
    cin >> num;

    while(num != 0){
        int last_digit = num % 10;
        new_num = new_num*10 + last_digit;
        num /= 10;
    }
    cout << new_num << endl;
}