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

void evenAfterOdd(Node* head){
    Node* odd = head;
    Node* even = head->next;

    Node* evenStart = even;

    while(odd->next != NULL && even->next != NULL){
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenStart;
    if(odd->next == NULL){
        even->next = NULL;
    }
}

void insetAtHead(Node* &head, int val){
    Node* n = new Node(val);
    n->next = head;
    head = n;
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
    insetAtHead(head,6);
    insetAtHead(head,5);
    insetAtHead(head,4);
    insetAtHead(head,3);
    insetAtHead(head,2);
    insetAtHead(head,1);
    display(head);
    cout << endl;
    evenAfterOdd(head);
    display(head);
}