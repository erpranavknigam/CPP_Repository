#include<iostream>
using namespace std;

class LinkedList{
    public:
        int data;
        LinkedList* next;

        LinkedList(int val){
            data = val;
            next = NULL;
        }
};

void insertAtEnd(int val, LinkedList* &head){
    LinkedList* temp = head;
    LinkedList* newNode = new LinkedList(val);

    if(head == NULL){
        head = newNode;
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteFromHead(LinkedList* &head){
    LinkedList* toDelete = head;
    head = head->next;
    delete toDelete;
}

void deletion(LinkedList* head, int val){
    if(head == NULL){
        return;
    }
    
    LinkedList* temp = head;

    if(head->next == NULL){
        deleteFromHead(head);
    }
    while(temp->next->data != val){
        temp = temp->next;
    }
    LinkedList* toDelete = temp->next;
    temp->next = temp->next->next;
    
    delete toDelete;
}



void display(LinkedList* head){
    LinkedList* temp = head;
    while(temp!=NULL){
        cout << temp->data << "->";
        temp = temp->next;
    } 
}

int main(){
    LinkedList* head = NULL;

    insertAtEnd(1, head);
    insertAtEnd(2, head);
    insertAtEnd(3, head);
    insertAtEnd(4, head);
    
    display(head);
    cout << endl;
    deletion(head,3);
    cout << endl;
    display(head);
    cout << endl;
    deleteFromHead(head);
    cout << endl;
    display(head);
}