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

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    return max(height(root->left), height(root->right))+1;
}

bool isBalanced(Node* root){
    if(root == NULL){
        return true;
    }
    if(isBalanced(root->left) == false){
        return false;
    }
    if(isBalanced(root->right) == false){
        return false;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    if(abs(lh-rh) <= 1){
        return true;
    } else{
        return false;
    }
}

/*Optimized version from O(N^2) to O(N)*/
bool isBalanced2(Node* root, int* height){
    if(root == NULL){
        return true;
    }
    int lh = 0, rh = 0;
    if(isBalanced2(root->left,&lh) == false){
        return false;
    }
    if(isBalanced2(root->right, &rh) == false){
        return false;
    }

    *height = max(lh, rh) + 1;

    if(abs(lh-rh) <= 1){
        return true;
    } else{
        return false;
    }
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

    bool res = isBalanced(root);
    cout << res << endl;
    int height = 0;
    res = isBalanced2(root, &height);
    cout << res << endl;

}