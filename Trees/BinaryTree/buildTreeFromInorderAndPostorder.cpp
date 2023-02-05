#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int search(int in[], int start, int end, int curr){
    for(int i = start; i <= end; i++){
        if(in[i] == curr){
            return i;
        }
    }
    return -1;
}
void inorderPrint(Node* root){
    if(root == NULL){
        return;
    }
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}
Node* buildTree(int post[], int in[], int start, int end){
    static int idx = 4;
    if(start > end){
        return NULL;
    }

    int val = post[idx];
    idx--;
    Node* node = new Node(val);
    if(start == end){
        return node;
    }
    int pos = search(in,start,end, val);
    node->right = buildTree(post,in,pos+1,end);
    node->left = buildTree(post,in,start,pos-1);

    return node;

}
int main(){
    int post[] = {4,2,5,3,1};
    int in[] = {4,2,1,5,3};

    Node* node = buildTree(post,in,0,4);
    inorderPrint(node);
}