#include<iostream>
using namespace std;

/*Example of Function Overloading*/
class ApnaCollege{
    public:
        void fun(){
            cout << "\nFunction with no args";
        }
        void fun(int x){
            cout << "\nFunction with one argument of int type";
        }
        void fun(double x){
            cout << "\nFunction with one argument of double type";
        }
};

int main(){
    ApnaCollege obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.2);
}

