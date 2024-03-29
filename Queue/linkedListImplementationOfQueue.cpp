#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }
};

class Queue{
    Node* front;
    Node* back;

    public:
        Queue(){
            front = NULL;
            back = NULL;
        }

        void enqueue(int val){

            Node* n = new Node(val);

            if(front == NULL){
                back = n;
                front = n;
                return;
            }

            back->next = n;
            back = n;
        }

        void dequeue(){
            if(front == NULL){
                cout << "Queue is empty." << endl;
                return;
            }
            Node* toDelete = front;
            front = front->next;
            delete toDelete;
        }

        int peek(){
            if(front == NULL){
                cout << "Queue is empty." << endl;
                return -1;
            }
            return front->data;
        }

        bool empty(){
            if(front == NULL){
                cout << "Queue is empty." << endl;
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
    cout << q.peek() << endl;
    q.dequeue();
    cout << q.peek() << endl;
    q.dequeue();
    cout << q.peek() << endl;
    q.dequeue();
    cout << q.peek() << endl;
    q.dequeue();
    cout << q.peek() << endl;
}