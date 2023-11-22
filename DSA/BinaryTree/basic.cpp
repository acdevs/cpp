#include <iostream>
#include <queue>
using namespace std;

class node{
public:
    int data;
    node *left;
    node *right;
    
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){
    cout << "data: ";
    int d;
    cin >> d;
    root = new node(d);

    if(d == -1)
        return NULL;

    cout << "Left of " << d << ", ";
    root->left = buildTree(root->left);

    cout << "Right of " << d << ", ";
    root->right = buildTree(root->right);

    return root;
}

void showq(queue<node*> gq)
{
    queue<node*> g = gq;
    while (!g.empty()) {
        cout << ' ' << g.front()->data;
        g.pop();
    }
    cout << '\n';
}

// Traversal -------------------------------------------------------------------

// Level Order Traversal

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

// Reverse Level Order Traversal
// code ...

void inorder(node* root){
    if(root == NULL)
        return;
    
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);

    /* 
    // iterative
    stack<node*> s;
    node* curr = root;

    while(curr != NULL || !s.empty()){
        while(curr != NULL){
            s.push(curr);
            curr = curr->left;
        }

        curr = s.top();
        s.pop();

        cout << curr->data << " ";

        curr = curr->right;
    }
     */ 
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

// Build Tree ------------------------------------------------------------------

// Build Tree from Preorder and Inorder

// Build Tree from Postorder and Inorder

// Build Tree from Level Order

node* buildFromLevelOrder(node* root);


int main(){
    node* root = NULL;
    root = buildTree(root);

    cout << "\nLevel Order Traversal: " << endl;
    levelOrderTraversal(root);

    cout << "\nInorder Traversal: " << endl;
    inorder(root);
    cout << endl;

    cout << "\nPreorder Traversal: " << endl;
    preorder(root);
    cout << endl;

    cout << "\nPostorder Traversal: " << endl;
    postorder(root);
    cout << endl;

    return 0;
}