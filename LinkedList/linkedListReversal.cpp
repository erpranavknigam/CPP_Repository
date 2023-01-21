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

/*Iterative Method*/
Node* reverseLinkedList(Node* &head){
    Node* prevPtr = NULL;
    Node* currPtr = head;
    Node* nextPtr;

    while(currPtr != NULL){
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;
        prevPtr = currPtr;
        currPtr = nextPtr;
    }

    return prevPtr;
}

/*Recursive Method*/
Node* reverseLinkedListRecursive(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* newHead =  reverseLinkedListRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

/*K nodes reversal of linked list*/
Node* reverseKNodes(Node* &head, int k){
    Node* prevptr = NULL;
    Node* currptr = head;
    Node* nextptr = NULL;

    int count = 0;
    while(currptr != NULL && count < k){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }

    if(nextptr != NULL){
        head->next = reverseKNodes(nextptr,k);
    }

    return prevptr;


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

    Node* newHead = reverseLinkedList(head);
    // reverseLinkedList(newHead);
    cout << endl;
    display(newHead);
    cout << endl;

    newHead = reverseLinkedListRecursive(newHead);
    cout << endl;
    display(newHead);
    cout << endl;

    newHead = reverseKNodes(newHead, 3);
    cout << endl;
    display(newHead);
    cout << endl;
}