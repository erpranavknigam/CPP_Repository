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

bool detectCycle(Node* &head){
    Node* fast = head;
    Node* slow = head;

    while(fast!=NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow){
            return true;
        }
    }
    return false;
}

void removeCycle(Node* &head){
    Node* slow = head;
    Node* fast = head;

    do{
        slow = slow->next;
        fast = fast->next->next;
    } while(slow != fast);

    fast = head;
    
    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}


void makeCycle(Node* &head, int pos){
    Node* temp = head;
    Node* startNode;

    int count = 1;
    while(temp->next != NULL){
        if(count == pos){
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }

    temp->next = startNode;
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
    
    cout << "NULL" << endl;
    insetAtHead(head, 5);
    insetAtHead(head, 6);
    insetAtHead(head, 7);
        
    display(head);

    makeCycle(head, 1);
    // display(head);
    cout << endl;
    cout << detectCycle(head);
    cout << endl;
    removeCycle(head);
    cout << endl;
    cout << detectCycle(head);
}