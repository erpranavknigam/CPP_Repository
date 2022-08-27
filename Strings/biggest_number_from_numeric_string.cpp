#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string number;
    cin >> number;

    sort(number.begin(), number.end(), greater<int>());

    int x = stoi(number);
    cout << x << endl;
}

