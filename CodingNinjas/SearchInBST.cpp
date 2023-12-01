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


/* Recursive : Time Complexity O(H) but in queue tree O(N)*/
bool searchInBST(Node* &root, int x) {
    if(root == NULL){
        return false;
    }
    
    if(root->data == x){
        return true;
    }
    else if(x > root->data){
        searchInBST(root->right, x);
    }
    else{
        searchInBST(root->left, x);
    }
    
}

/*Iteritive : Time Complexity O(H) */
bool searchInBST(Node* &root, int x) {
    Node *temp = root;
    
    while(temp != NULL){
        if(temp->data == x){
            return true;
        }
        else if(x > temp->data){
            temp = temp->right;
        }
        else{
            temp = temp->left;
        }
    }
    return false;
    
}