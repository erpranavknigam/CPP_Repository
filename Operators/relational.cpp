#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n == 10){
        cout << "Equals to 10" << endl;
    }
    else if(n < 10){
        cout << "Less to 10" << endl;
    } else{
        cout << "Greater than 10" << endl;
    }
}