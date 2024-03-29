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
Node* buildTree(int pre[], int in[], int start, int end){
    static int idx = 0;

    if(start > end){
        return NULL;
    }
    int curr = pre[idx];
    idx++;
    Node* node = new Node(curr);
    if(start == end){
        return node;
    }
    int pos = search(in, start, end, curr);
    node->left = buildTree(pre,in,start,pos-1);
    node->right = buildTree(pre,in,pos+1,end);

    return node;
}
int main(){
    int pre[] = {1,2,4,3,5};
    int in[] = {4,2,1,5,3};

    Node* root = buildTree(pre,in,0,4);
    inorderPrint(root);

}