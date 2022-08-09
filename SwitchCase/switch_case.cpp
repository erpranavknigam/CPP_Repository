#include<iostream>
using namespace std;

int main(){
    char button;
    cout << "Input a Character: ";
    cin >> button;

    switch (button){
        case 'a':
            cout << "Hello";
            break;
        case 'b':
            cout << "Namaste";
            break;
        case 'c':
            cout << "Hola";
            break;
        case 'd':
            cout << "Salut";
            break;
        case 'e':
            cout << "Ciao";
            break;
        default:
            cout << "I am still learning more.";
    }
    return 0;
}