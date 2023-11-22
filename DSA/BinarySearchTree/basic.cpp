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

// Traversals ------------------------------------------------

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty())
                q.push(NULL);
        }else{
            cout << temp->data << " ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }

    }
}

void inorder(node* root){
    if(root == NULL)
        return;
    
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node* root){
    if(root == NULL)
        return;
    
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    if(root == NULL)
        return;
    
    postorder(root->left);
    postorder(root->right);   
    cout << root->data << " ";
}

// Searching --------------------------------------------------

/* bool searchBST(node* root, int target){
     if(root == NULL){
        return false;
     }

    if(target < root->data)
        searchBST(root->left, target);
    else if(target > root->data)
        searchBST(root->right, target);
    else
        return true;
} */

bool searchBST(node* root, int target){
    if(root == NULL)
        return false;
    
    node* temp = root;
    
    while(temp != NULL){
        if(target < temp->data)
            temp = temp->left;
        else if(target > temp->data)
            temp = temp->right;
        else
            return true;
    }
    return false;
}

// Min-Max ----------------------------------------------------

node* minBST(node* root){
    node* temp = root;

    while(temp->left != NULL)
        temp = temp->left;

    return temp;
}

node* maxBST(node* root){
    node* temp = root;

    while(temp->right != NULL)
        temp = temp->right;

    return temp;
}

// Deletion --------------------------------------------------

node* deleteBST(node* root, int val){
    if(root == NULL)
        return root;
    
    if(root->data == val){
        // 0 child
        if(root->left != NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        // 1 child
        if(root->left != NULL && root->right == NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        if(root->left == NULL && root->right != NULL){
            node * temp = root->right;
            delete root;
            return root;
        }

        // 2 child
        if(root->left != NULL && root->right != NULL){
            int mini = minBST(root->right)->data;
            root->data = mini;
            root->right = deleteBST(root->right, mini); // 🤯
            return root;
        }

    }else if(root->data > val)
        root->left = deleteBST(root->left, val);
    else
        root->right = deleteBST(root->right, val);
    
}


int main(){
    node* root = NULL;
    takeInput(root);

    levelOrderTraversal(root);
    cout << endl;

    // inorder(root);
    // cout << endl;

    // preorder(root);
    // cout << endl;

    // postorder(root);
    // cout << endl;

    // cout << "min: " << minBST(root)->data << endl;
    // cout << "max: " << maxBST(root)->data << endl;

    // searching...
    // cout << "Enter target: ";
    // int target;
    // cin >> target;
    // searchBST(root, target) ? cout << "found." : cout << "not found.";

    // deletion...
    root = deleteBST(root, 110);

    levelOrderTraversal(root);
}