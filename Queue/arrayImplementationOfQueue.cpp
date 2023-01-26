#include<iostream>
using namespace std;
#define n 20

class Queue{
    int* arr;
    int front;
    int back;

    public:
        Queue(){
            arr = new int[n];
            front = -1;
            back = -1;
        }

        void enqueue(int x){
            if(back == n-1){
                cout << "Queue is full" << endl;
                return;
            } else{
                back++;
                arr[back] = x;

                if(front == -1){
                    front++;
                }
            }
        }

        void dequeue(){
            if(front == -1 || front > back){
                cout << "Queue is empty" << endl;
                return;
            } else{
                front++;
            }
        }

        int peek(){
            if(front == -1 || front > back){
                cout << "Queue is empty" << endl;
                return -1;
            } else{
                return arr[front];
            }
        }

        bool empty(){
            if(front == -1 || front > back){
                cout << "Queue is empty" << endl;
                return true;
            }
            return false;
        }

        
};
int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    
    cout << q.peek() << endl;
    q.dequeue();
    cout << q.peek() << endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
}