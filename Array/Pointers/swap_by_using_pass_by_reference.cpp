#include<iostream>
using namespace std;

int swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 4;
    int b = 10;
    int *aptr = &a;
    int *bptr = &b;
    swap(a,b);
    cout << "a = " << a << " b = " << b << endl;
    swap2(aptr,bptr);
    cout << "a = " << a << " b = " << b << endl;
}