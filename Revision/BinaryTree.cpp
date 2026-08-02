#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data  = d;
        this->left= NULL;
        this->right=NULL;
    }
};

node* buildTree(node* root){
    cout<<"Enter the data: " <<endl;
    int data;
    cin>>data;
    if(data==-1){
    return NULL;
    }

    root = new node(data);
    


    cout<<"Enter data in the left child "<< data << endl;
    root->left= buildTree(root->left);
    cout<<"Enter data in the right child " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<< temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inorderTraversal(node* root){
    if(root==NULL){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

void postorderTraversal(node* root){
    if(root==NULL){
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
}

void preorderTraversal(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
int main(){
    node* root = NULL;
    root = buildTree(root);

    levelOrderTraversal(root);
    cout<<endl<<endl;
    inorderTraversal(root);
    cout<<endl<<endl;
    preorderTraversal(root);
    cout<<endl<<endl;
    postorderTraversal(root);

}