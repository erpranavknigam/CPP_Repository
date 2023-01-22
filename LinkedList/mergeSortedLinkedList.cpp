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
Node* mergeSorted(Node* &head1, Node* &head2){
    Node* ptr1 = head1;
    Node* ptr2 = head2;

    Node* dummyNode = new Node(-1);
    Node* ptr3 = dummyNode;

    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1->data < ptr2->data){
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        } else{
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    while(ptr1!=NULL){
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
    }

    while(ptr2!=NULL){
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
    }

    return dummyNode->next;
}

Node* mergeRecursive(Node* &head1, Node* &head2){

    if(head1==NULL){
        return head2;
    }

    if(head2 == NULL){
        return head1;
    }

    Node* result;
    if(head1->data < head2->data){
        result = head1;
        result->next = mergeRecursive(head1->next,head2);
    } else{
        result = head2;
        result->next = mergeRecursive(head1, head2->next);
    }

    return result;
}
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << "->";
        temp = temp->next;
    } 
}

int main(){
    Node* head1 = NULL;
    Node* head2 = NULL;
    
    // cout << "NULL" << endl;
    insetAtHead(head1, 6);
    insetAtHead(head1, 5);
    insetAtHead(head1, 4);
    insetAtHead(head1, 3);
    insetAtHead(head1, 2);
    insetAtHead(head1, 1);
    display(head1);
    cout << endl;
    insetAtHead(head2,9);
    insetAtHead(head2,8);
    insetAtHead(head2,7);
    display(head2);
    cout << endl;

    // Node* newHead = mergeSorted(head1,head2);
    Node* newHead = mergeRecursive(head1, head2);
    display(newHead);
    cout << endl;
    
    
}