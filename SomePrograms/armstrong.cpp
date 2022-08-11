#include<iostream>
#include<math.h>
using namespace std;   

int main(){
    int num, val = 0;
    cin >> num;
    int temp = num;
    while(temp > 0){
        int last_digit = temp % 10;
        val += pow(last_digit,3);
        temp = temp / 10;
        
    }
    if(val == num){
        cout << num << " is an armstrong number." << endl;
    } else{
        cout << num << " is not an armstrong number." << endl;
    }
}