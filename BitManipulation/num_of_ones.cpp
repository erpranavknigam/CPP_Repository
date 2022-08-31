#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int new_num = num - 1;
    int count = 0;
    while(num != 0){
        num = num & new_num;
        new_num = num - 1;
        count++;
    }
    cout << count << endl;
}