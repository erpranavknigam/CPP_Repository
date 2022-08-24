#include<iostream>
using namespace std;    

int main(){
    int a = 10;
    char ch = 'a';
    int *aptr = &a;
    char *cptr = &ch;
    cout << aptr << endl;
    aptr++;
    cout << aptr << endl;
    cout << cptr << endl;
    cptr++;
    cout << cptr << endl;

    int arr[] = {10,20,30};
    cout << *arr << endl;

    int *p = arr;
    for(int i = 0; i < 3; i++){
        cout << *p << endl;
        p++;
    }

    for(int i = 0; i < 3; i++){
        cout << *(arr+i) << endl;
        p++;
    }
}