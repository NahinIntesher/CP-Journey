#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
  public:
    bool isMaxHeap(Node* root){
        if(root -> left == NULL && root -> right == NULL)
            return true;
        
        else if(root -> right == NULL)
            return (root -> data > root -> left -> data);
        
        else{
            bool left = isMaxHeap(root -> left);
            bool right =  isMaxHeap(root -> right);
            return (left && right && root->data > root->left->data 
            && root->data > root->right->data);
        }
    }
    
    bool isCBT(Node* root, int i, int nodeCount){
        if(root == NULL)
            return true;
        
        if(i >= nodeCount)
            return false;
        
        else{
            bool left = isCBT(root->left, 2*i+1, nodeCount);
            bool right = isCBT(root->right, 2*i+2, nodeCount);
            return (left && right);
        }
    }
    
    int countNodes(Node* root){
        if(root == NULL)
            return 0;

        int ans = 1 + countNodes(root -> left) + countNodes(root -> right);
        return ans;
    }
    
    // Question Code: 
    bool isHeap(Node* &root) {
        int index = 0;
        int nodeCount = countNodes(root);
        if(isCBT(root, index, nodeCount) && isMaxHeap(root)){
            return true;
        }
        return false;
    }
};