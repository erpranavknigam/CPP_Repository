 #include <iostream>
 using namespace std;

 /*Single Inheritance*/
 class A{
    public:
        void funcA(){
            cout << "Inherited from A" << endl;
        }
 };

 class B : public A{
    public:
        void funcB(){
            cout << "Inherited from B" << endl;
        }
 };

/*Multiple Inheritance*/

class C : public A, public B{

};

/*Multilevel Inheritance*/
class D : public B{};


 int main(){
    B b;
    cout << "\nB Inherits A: ";
    b.funcA();
    C c;
    cout << "\nC Inherits A and B: ";
    c.funcB();
    D d;
    cout << "\nD Inherits A using B: ";
    d.funcA();
    d.funcB();
 }