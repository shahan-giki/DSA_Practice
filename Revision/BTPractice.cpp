//Finding the Height of the tree.Largest path between the root node and the leaf node.
#include<iostream>
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

class solution{
    public:
    int height(node* Node){
        if(Node==NULL){
            return 0;
        }
        int left=height(Node->left);
        int right=height(Node->right);
        int answer=max(left,right)+1;
        return ans;
    }
};

