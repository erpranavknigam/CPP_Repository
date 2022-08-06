#include<iostream>
using namespace std;

int main(){
    int a; // Declaration
    a = 12; // Initialisation

    cout << "Size of int is: " << sizeof(a) << endl;

    float b;
    b = 2.5;

    cout << "Size of float is: " << sizeof(b) << endl;

    char c;
    c = 'a';
    cout << "Size of char is: " << sizeof(c) << endl;

    bool d;
    d = true;
    cout << "Size of bool is: " << sizeof(d) << endl;

    short int e;
    cout << "Size of short int is: " << sizeof(e) << endl;

    long int f;
    cout << "Size of long int is: " << sizeof(f) << endl;

}