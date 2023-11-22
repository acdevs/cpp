#include <iostream>
#include <queue>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// Building a BST ---------------------------------------------

node* insertIntoBST(node* root, int d){
    if(root == NULL){
        root = new node(d);
        return root;
    }

    if(d > root->data)
        root->right = insertIntoBST(root->right, d);
    else
        root->left = insertIntoBST(root->left, d);

    return root;
}

void takeInput(node* &root){
    cout << "data: ";
    int d;
    cin >> d;

    while(d != -1){
        root = insertIntoBST(root, d);
        cin >> d;
    }
}

int main(){
    node* root = NULL;
    takeInput(root);

    // Inorder Accessors -----------------------------------------
    // Inorder Successor: Smallest element in the right subtree
    // Inorder Predecessor: Largest element in the left subtree

    // Inorder Successor
    node* temp = root->right;
    while(temp->left != NULL)
        temp = temp->left;
    cout << "Inorder Successor: " << temp->data << endl;

    // Inorder Predecessor
    // node* temp = root->left;
    // while(temp->right != NULL)
    //     temp = temp->right;
    // cout << "Inorder Predecessor: " << temp->data << endl;

    return 0;
}