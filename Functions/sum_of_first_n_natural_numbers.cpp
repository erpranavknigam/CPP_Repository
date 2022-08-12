#include<iostream>
using namespace std;

void sum_of_n(int num){
    int sum = 0;
    for(int i = 1; i <= num; i++){
        sum += i;
    }
    cout << sum << endl;
}
int main(){
    int n;
    cin >> n;

    sum_of_n(n);
    return 0;
}