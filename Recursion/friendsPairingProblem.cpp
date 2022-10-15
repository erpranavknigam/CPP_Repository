#include<iostream>
using namespace std;

int friendsPairingCount(int n){
    if(n == 0 || n == 1 || n == 2){
        return n;
    }

    return friendsPairingCount(n-1) + friendsPairingCount(n-2) * (n-1);
    
}
int main(){
    int numOfFriends;
    cin >> numOfFriends;
    int count = friendsPairingCount(numOfFriends);
    cout << count << endl;
}