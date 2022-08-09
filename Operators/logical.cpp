#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    if(num % 2 == 0 && num % 3 == 0){
        cout << "Divisible by 2 and 3" << endl;
    } else if(num % 2 == 0){
        cout << "Divisible by 2 but not by 3" << endl;
    } else if(num % 3 == 0){
        cout << "Not divisible by 2 but divisible by 3" << endl;
    } else{
        cout << "Neither divisible by 2 nor divisible by 3" << endl;
    }
}