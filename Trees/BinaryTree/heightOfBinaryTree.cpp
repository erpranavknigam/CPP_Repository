#include<iostream>

using namespace std;

struct Node{
    Node* left;
    Node* right;
    int data;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


int heightOfTree(Node* root){
    if(root == NULL){
        return 0;
    }
    int lHeight = heightOfTree(root->left);
    int rHeight = heightOfTree(root->right);

    return max(lHeight, rHeight) + 1;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(9);

    cout << heightOfTree(root);
}