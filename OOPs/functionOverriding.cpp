#include<iostream>
using namespace std;

class Base{
    public:
        virtual void print(){
            cout << "This is the base class's print function.";
        }
        void display(){
            cout << "This is the base class's display  function.";
        }
};

class Derived{
    public:
        void print(){
            cout << "This is derived class's print function.";
        }
        void display(){
            cout << "This is the derived class's display  function.";
        }
};

int main(){
    Base *baseptr;
    Derived d;
    // baseptr = &d;
    baseptr->display();
    baseptr->print();


}