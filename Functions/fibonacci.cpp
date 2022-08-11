#include<iostream>
using namespace std;

void fibonacci(int n){
    int a = 0;
    int b = 1;

    if(n <= 0){
        cout << "No Fibonacci numbers can be printed." << endl;
        return;
    }
    else if(n == 1){
        cout << a << endl; 
        return;
    }
    else if(n == 2){
        cout << a << " " << b << endl;
        return;
    }
    else{
        for(int i = 1; i <= n; i++){
            cout << a << " ";
            int next = a + b;
            a = b;
            b = next;
        }
    }
}
int main(){
    int n;
    cin >> n;

    fibonacci(n);
    return 0;
}