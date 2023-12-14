#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
    Node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

class Solution {
public:
    vector<int> result;

    void traverseLeaf(Node* root){
         if(root == NULL) {
            return;
        }
        else if(root -> left == NULL && root -> right == NULL){
            result.push_back(root -> data);
            return;
        }
        traverseLeaf(root -> left);
        traverseLeaf(root -> right);
    }

    void traverseLeft(Node* root){
        // Base Case
        if(root == NULL) {
            return;
        }
        // Without leaf Nodes
        else if(root -> left == NULL && root -> right == NULL){
            return;
        }

        result.push_back(root -> data);
        if(root -> left != NULL){
            traverseLeft(root -> left);
        }
        else{
            traverseLeft(root -> right);
        }
        
    }

    void traverseRight(Node* root){
        // Base Case
        if(root == NULL) {
            return;
        }
        // Without leaf Nodes
        else if(root -> left == NULL && root -> right == NULL){
            return;
        }
        
        if(root -> right != NULL){
            traverseRight(root -> right);
        }
        else{
            traverseRight(root -> left);
        }
        result.push_back(root -> data);
    }
    

    vector <int> boundary(Node *root){
        if(root == NULL) {
            return result;
        }
        // Pushing root
        result.push_back(root -> data);

        /* Left part */
        traverseLeft(root -> left);

        /* Traverse Leaf Nodes */
        // Left subtree
        traverseLeaf(root -> left);
        // Right subtree
        traverseLeaf(root -> right);

        /* Right part */
        traverseRight(root -> right);

        return result;
    }
};