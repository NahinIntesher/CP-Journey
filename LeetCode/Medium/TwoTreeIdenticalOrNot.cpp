#include<bits/stdc++.h>
using namespace std; 

class Node{
    public:
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

class Solution{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2){
        
        // Base Cases
        if(r1 == NULL && r2 == NULL) return true;
        if(r1 == NULL && r2 != NULL) return false;
        if(r1 != NULL && r2 == NULL) return false;

        // Main case
        if(r1 -> data != r2 -> data) return false;

        bool left = isIdentical(r1->left, r2->left);
        if(left == false) return false;
        
        bool right = isIdentical(r1->right, r2->right);
        if(right == false) return false;
        
        // else 
        return true;
    }
};