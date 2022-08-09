#include<iostream>
using namespace std;    

int main(){
    int a = 97;
    cout << sizeof(a) << endl;
    cout << (a>3?5:6) << endl;
    char b = (char)a;
    cout << b << endl;
    a = (2,3,4);
    cout << a << endl;
    cout << &a << endl;
    int *c = &a;
    cout << *c << endl;

}