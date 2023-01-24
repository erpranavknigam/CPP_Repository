#include<iostream>
using namespace std;

#define n 100

class Stack{
    int* arr;
    int top;

    public:
        Stack(){
            arr = new int[n];
            top = -1;
        }

        void push(int x){
            if (top == n-1){
                cout << "Stack Overflow" << endl;
                return;
            }
            top++;
            arr[top] = x;
        }

        void pop(){
            if(top == -1){
                cout << "Stack Underflow" << endl;
                return;
            }
            top--;
        }

        int _top(){
            if(top == -1){
                cout << "No value in stack." << endl;
                return -1;
            }
            return arr[top];
        }

        bool empty(){
            if(top == -1){
                return true;
            } 
            return false;
        }
};
int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    cout << st._top() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout << st._top() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout << st._top() << endl;
    return 0;
}