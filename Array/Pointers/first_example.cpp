#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *aptr = &a;
    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "aptr = " << aptr << endl;
    cout << "*aptr = " << *aptr << endl;

    *aptr = 20;

    cout << "=========================" << endl;
    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "aptr = " << aptr << endl;
    cout << "*aptr = " << *aptr << endl;
}