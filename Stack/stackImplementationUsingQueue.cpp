#include<iostream>
#include<queue>
using namespace std;

/*Method 1 using two queues push is costly*/
class Stack{
    int N;
    queue<int> q1;
    queue<int> q2;
    public:
        Stack(){
            N = 0;
        }
        void push(int x){
           q2.push(x);
           N++;
           while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
           }

           queue<int> temp = q1;
           q1 = q2;
           q2 = temp;
        }
        void pop(){
            q1.pop();
            N--;
        }
        int top(){
            return q1.front();
        }
        int size(){
            return N;
        }
        int empty(){
            if(q1.empty() && q2.empty()){
                return true;
            }
            return false;
        }
};

/*Method 2 pop is costly*/
class _Stack{
    int N;
    queue<int> q1;
    queue<int> q2;

    public:
        _Stack(){
            N = 0;
        }
        void push(int x){
            q1.push(x);
            N++;
            return;
        }
        void pop(){
            if(q1.empty()){
                cout << "Empty" << endl;
                return;
            }
            while(q1.size() != 1){
                q2.push(q1.front());
                q1.pop();
            }
            q1.pop();
            N--;
            queue<int> temp;
            temp = q1;
            q1 = q2;
            q2 = temp;
        }
        int top(){
            if(q1.empty()){
                cout << "Empty" << endl;
                return -1;
            }
            while(q1.size() != 1){
                q2.push(q1.front());
                q1.pop();
            }
            int elem = q1.front();
            q2.push(elem);
            queue<int> temp;
            temp = q1;
            q1 = q2;
            q2 = temp;

            return elem;
        }
        int size(){
            return N;
        }

};
int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << s.top() << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;

    _Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    cout << s1.top() << endl;
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    cout << s1.top() << endl;
    cout << s1.size() << endl;
}