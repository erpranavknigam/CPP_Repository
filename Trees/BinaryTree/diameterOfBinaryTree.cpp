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

int diameterOfTree(Node* root){
    if(root == NULL){
        return 0;
    }
    int lHeight = heightOfTree(root->left);
    int rHeight = heightOfTree(root->right);

    int currDia = lHeight + rHeight + 1;

    int lDia = diameterOfTree(root->left);
    int rDia = diameterOfTree(root->right);

    return max(currDia, max(lDia, rDia));
}

/*Optimized Method for O(N^2) to O(N)*/
int calcDia(Node* root, int* height){

    if(root == NULL){
        *height = 0;
        return 0;
    }
    int lh = 0, rh = 0;
    int lDia = calcDia(root->left,&lh);
    int rDia = calcDia(root->right,&rh);
    int currDia = lh + rh + 1;
    *height = max(lh, rh) + 1;
    return max(currDia, max(lDia, rDia));
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

    cout << diameterOfTree(root) << endl;
    int height = 0;
    cout << calcDia(root,&height) << endl;
}