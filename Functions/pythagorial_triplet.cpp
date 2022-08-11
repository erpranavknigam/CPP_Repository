#include<iostream>
#include<math.h>
using namespace std;

bool check(int x, int y, int z){
    int a = max(x,max(y,z));
    int b, c;
    if(a == x){
        b = y;
        c = z;
    } else if(a == y){
        b = x;
        c = z;
    } else{
        b = x;
        c = y;
    }

    if(a*a == b*b + c*c){
        return true;
    }
    return false;
}

int main(){
    int a, b, c;

    cin >> a >> b >> c;

    
    if(check(a,b,c)){
        cout << "Yes, " << a << ", " << b << ", and " << c << " are Pythagorial Triplets." << endl;
    }
    else{
        cout << "No, " << a << ", " << b << ", and " << c << " are not Pythagorial Triplets." << endl;    
    }
}