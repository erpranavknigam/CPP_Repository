#include<iostream>
using namespace std;

int main(){\
    int n;
    cin >> n;
    char arr[n];
    cin >> arr;
    int i = 0;
    int j = n-1;
    bool flag = true;
    while(i <= j){
        if(arr[i] == arr[j]){
            i++;
            j--;
        } else{
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "It is palindrome" << endl;
    } else{
        cout << "It is not palindrome" << endl;
    }
}