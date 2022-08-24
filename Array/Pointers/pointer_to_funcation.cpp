#include<iostream>
using namespace std;
void increment(int a){
    a++;
}
void increment2(int *p){
    ++*p;
}
int main(){
    int a = 2;
    increment(a);
    cout << "a = " << a << endl;
    increment2(&a);
    cout << "a = " << a << endl;

}