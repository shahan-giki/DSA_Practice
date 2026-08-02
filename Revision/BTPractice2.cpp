/*Finding the longest path between 2 end nodes is 
known as diameter of the tree and below is the 
practice problem for this concept.
Practice Problem: Finding the diameter of the tree.
 */
#include<iostream>
using namespace std;

 class node{
    private:
    int height(node* Node){
        if(Node==NULL){
            return 0;
        }
        int left=height(Node->left);
        int right=height(Node->right);
        int answer=max(left,right)+1;
        return ans;
    }
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
//This returns the diameter in O(n^2).
class solution {
    int diameter(node* Node){
        if (Node==NULL){
            return 0;
        }
        int option1=diameter(Node->left);
        int option2=diameter(Node->right);
        int option3=height(root->left)+height(root->right)+1;

        int ans=max(option1,max(option2,option3));
        return ans;
    }
}; 
//Creating a second function for returning diameter 
// in O(n) time.

pair <int,int> diameterFast(node* Node){
    if(Node==NULL){
        pair<int,int> p = make_pair(0,0);
        return p;
    }

    pair<int,int> left = diameterFast(Node->left);
    pair<int,int> right = diameterFast(Node->right);
    int option1= left.first;
    int option2= right.first;

    int option3= left.second + right.second +1;
    ans.first = max(option1, max(option2,option3));
    ans.second = max(left.second,right.second)+1;
    return ans;
}