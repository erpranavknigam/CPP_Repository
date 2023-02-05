#include<iostream>
#include<queue>
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

int numberOfNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    return numberOfNodes(root->left) + numberOfNodes(root->right) + 1;
}

int sumOfAllNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    return sumOfAllNodes(root->left) + sumOfAllNodes(root->right) + root->data;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int res = numberOfNodes(root);

    cout << res << endl;

    int sum = sumOfAllNodes(root);

    cout << sum << endl;
}