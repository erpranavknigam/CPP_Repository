#include<iostream>
using namespace std;

class Node{
    public:
        Node* next;
        int data;

        Node(int val){
            data = val;
            next = NULL;
        }
};

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    Node* temp = head;
    if(head == NULL){
        n->next = n;
        head = n;
        return;
    }
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}
void insertAtTail(Node* &head, int val){

    if(head==NULL){
        insertAtHead(head, val);
        return;
    }
    Node* n = new Node(val);
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void deleteAtHead(Node* &head){
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    Node* toDelete = head;
    temp->next = head->next;
    head = head->next;

    delete toDelete;
}

void deletion(Node* &head, int pos){

    if(pos == 1){
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    int count = 1;

    while(count!=pos-1){
        temp = temp->next;
        count++;
    }

    Node* toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
}
void display(Node* head){
    Node* temp = head;
    do{
        cout << temp->data << "-->";
        temp = temp->next;
    } while(temp != head);
    cout << endl;
}
int main(){
    Node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    insertAtHead(head,7);
    display(head);
    deletion(head,3);
    display(head);
    deletion(head,1);
    display(head);
}