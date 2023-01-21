#include<iostream>
using namespace std;

class Node{
    public:
        Node* next;
        Node* prev;
        int data;

        Node(int val){
            next = NULL;
            prev = NULL;
            data = val;
        }
};

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    n->next = head;
    if (head != NULL){
        head->prev = n;
    }
    n->prev = NULL;
    head = n;
}

void insertAtTail(Node* &head, int val){
    Node* n = new Node(val);
    Node* temp = head;

    if (head == NULL){
        insertAtHead(head, val);
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
    n->next = NULL;
}

void deleteAtHead(Node* &head){
    Node* toDelete = head;
    head = head->next;
    head->prev = NULL;
    
    delete toDelete;
}

void deleteNode(Node* &head, int pos){

    if(pos == 1){
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    int count = 1;

    while(temp != NULL && count != pos){
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if(temp->next != NULL){
        temp->next->prev = temp->prev;
    }

    delete temp;
}
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "-->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main(){
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    display(head);

    deleteNode(head,3);

    display(head);

    deleteNode(head, 1);
    
    display(head);
}