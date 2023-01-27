#include<iostream>
#include<stack>
using namespace std;


/*Method 1 using 2 stacks*/
class Queue{
    stack<int> st1;
    stack<int> st2;

    public:
        void enqueue(int x){
            st1.push(x);
        }
        int dequeue(){
            if(st1.empty() && st2.empty()){
                cout << "Queue is empty." << endl;
                return -1;
            }
            if(st2.empty()){
                while(!st1.empty()){
                    st2.push(st1.top());
                    st1.pop();
                }
            }
            int topval = st2.top();
            st2.pop();
            return topval;
        }
        bool empty(){
            if(st1.empty() && st2.empty()){
                return true;
            }
            return false;
        }

};

/*Method 2 using function call stack*/
class NewQueue{
    stack<int> s1;
    public:
        void enqueue(int x){
            s1.push(x);
        }

        int dequeue(){
            if(s1.empty()){
                cout << "Queue is empty." << endl;
                return -1;
            }
            int x = s1.top();
            s1.pop();
            if(s1.empty()){
                return x;
            }
            int item = dequeue();
            s1.push(x);
            return item;
        }

        bool empty(){
            if(s1.empty()){
                cout << "Queue is empty." << endl;
                return -1;
            }
        }
};

int main(){
    Queue q;
    NewQueue q1;
    q.enqueue(1);  
    q.enqueue(2);  
    q.enqueue(3);  
    q.enqueue(4);  
    q.enqueue(5); 
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    
    q1.enqueue(1);  
    q1.enqueue(2);  
    q1.enqueue(3);  
    q1.enqueue(4);  
    q1.enqueue(5);
    cout << q1.dequeue() << endl;
    cout << q1.dequeue() << endl;
    cout << q1.dequeue() << endl;
    cout << q1.dequeue() << endl;
    cout << q1.dequeue() << endl;
    cout << q1.dequeue() << endl;
}