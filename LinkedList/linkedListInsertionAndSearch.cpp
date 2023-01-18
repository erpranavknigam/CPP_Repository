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

void insertAtTail(Node* &head, int val){

    Node* n = new Node(val);

    if(head == NULL){
       head = n; 
       return;
    }

    Node *temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = n;
}

bool search(Node* head, int key){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
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
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);

    display(head);
    cout << "NULL" << endl;
    insetAtHead(head, 5);
    insetAtHead(head, 6);
    insetAtHead(head, 7);
        
    display(head);

    cout << "NULL" << endl;

    cout << search(head,11);
    cout << search(head,5);
}