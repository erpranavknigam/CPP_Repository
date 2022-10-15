#include<iostream>
using namespace std;

int countPaths(int start, int end){
    int count = 0;
    if(start == end){
        return 1;
    }
    if(start > end){
        return 0;
    }
    for(int i = 1; i <= 6; i++){
        count += countPaths(start+i, end);
    }
    return count;
}
int main(){
    int start, end;

    cin >> start >> end;
    int counts = countPaths(start, end);
    cout << counts << endl;
}