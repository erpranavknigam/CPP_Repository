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

void insetAtHead(Node* &head, int val){
    Node* n = new Node(val);
    n->next = head;
    head = n;
}

int length(Node* head){
    int l = 0;
    Node* temp = head;
    
    while(temp != NULL){
        l++;
        temp = temp->next;
    }

    return l;
}
Node* kAppend(Node* &head, int k){
    Node* newHead;
    Node* newTail;
    Node* tail = head;

    int l = length(head);

    k = k % l;

    int count = 1;

    while(tail->next != NULL){
        if(count == l-k){
            newTail = tail;
        }
        if(count == l-k+1){
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }

    newTail->next = NULL;
    tail->next = head;

    return newHead;
}
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << "->";
        temp = temp->next;
    } 
}

int main(){
    Node* head = NULL;
    
    // cout << "NULL" << endl;
    insetAtHead(head, 6);
    insetAtHead(head, 5);
    insetAtHead(head, 4);
    insetAtHead(head, 3);
    insetAtHead(head, 2);
    insetAtHead(head, 1);
        
    display(head);
    cout << endl;
    Node* newHead = kAppend(head,3);
    display(newHead);
}