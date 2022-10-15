#include<iostream>
using namespace std;

int getMaxGain(int capacity, int weights[], int value[], int numOfItems){
    if(numOfItems == 0 || capacity == 0)
    {
        return 0;
    }
    if(weights[numOfItems - 1] > capacity){
        return getMaxGain(capacity, weights, value, numOfItems-1);
    }
    return max(getMaxGain(capacity-weights[numOfItems-1], weights, value, numOfItems-1) + value[numOfItems-1], getMaxGain(capacity, weights, value, numOfItems-1));
}
int main(){
    int knapsackCapacity;
    int numOfItems;
    cin >> knapsackCapacity >> numOfItems;
    int weights[numOfItems], value[numOfItems];
    for(int i = 0; i < numOfItems; i++){
        cin >> weights[i];
    }
    for(int i = 0; i < numOfItems; i++){
        cin >> value[i];
    }
    int maxGain = getMaxGain(knapsackCapacity, weights, value, numOfItems);
    cout << maxGain << endl;
}