#include<bits/stdc++.h>
using namespace std;
typedef struct Node Node;   

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

/* Recursively : Time Complexity O(N) & Space Complexity O(height) [Worst case: O(n) in case of queue tree] */
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(Node* root){
        if(root == NULL) return 0;

        int lenLeft = height(root -> left);
        int lenRight = height(root -> right);
        
        int maxHeight = max(lenLeft, lenRight);
        return maxHeight + 1;
    }
}; 


/* Iteratively : Time Complexity O(N) */
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(Node* root){
        queue<Node*> q;

        int Height = 0;

        if(root == NULL) return Height;

        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            Node* temp = q.front();
            q.pop();
            
            if(temp == NULL){
                Height++;
            }
            else{
                if(temp -> left != NULL){
                    q.push(temp -> left);
                }
                if(temp -> right != NULL){
                    q.push(temp -> right);
                }
            }
            
            if(temp == NULL && !q.empty()){
                q.push(NULL);
            }
        }
        return Height;
    }
};