#include<iostream>
using namespace std;

void towerOfHanoi(int n, char source, char destination, char helper){
    if(n == 0){
        return;
    }
    towerOfHanoi(n-1, source, helper, destination);
    cout << "Move from " << source << " to " << destination << endl;
    towerOfHanoi(n-1, helper, destination, source);
}
int main(int argc, char** argv){
    int numberOfBlocks, source, destination, helper;
    cout << "Number of blocks: ";
    cin >> numberOfBlocks;
    cout << "Enter source, destination, and helper: ";
    cin >> source >> destination >> helper;
    towerOfHanoi(numberOfBlocks, source, destination, helper);
}