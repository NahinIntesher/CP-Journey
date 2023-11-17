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

/* 1st Approach */
class Solution{
    public:
    bool isBalance = true;

    int height(Node* root){
        if(root == NULL) return 0;

        int lenLeft = height(root -> left);
        int lenRight = height(root -> right);
        
        if(abs(lenLeft - lenRight) > 1){
            isBalance = false;
            return 0;
        }
        
        int maxHeight = max(lenLeft, lenRight);
        return maxHeight + 1;
    }
    
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root){
        height(root);
        return isBalance;
    }
};


/* 2nd Approach */
class Solution{
    public:
    int height(Node* root){
        if(root == NULL) return 0;
        
        int lenLeft = height(root -> left);
        if(lenLeft == -1) return -1; /* (i) Left Node is not balanced */
        
        int lenRight = height(root -> right);
        if(lenRight == -1) return -1; /* (ii) Right Node is not balanced */
        
        if(abs(lenLeft - lenRight) > 1){
            return -1; /* (iii) Current Node is not balanced */
        }
        /* In 3 cases the tree is no balanced. So, we have to return -1 */
        
        int maxHeight = max(lenLeft, lenRight);
        return maxHeight + 1;
    }
    
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root){
        int Height = height(root);
        return Height == -1 ? 0: 1;
    }
};


/* 3rd Approach */
class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    pair<bool, int> isBalancedFast(Node* root) {
        // base case
        if(root == NULL){
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        
        pair<int,int> left = isBalancedFast(root->left);
        pair<int,int> right = isBalancedFast(root->right);
        
        
        bool leftAns = left.first;
        bool rightAns = right.first;
        
        bool diff = abs (left.second - right.second ) <=1;
        
        pair<bool,int> ans;
        ans.second = max(left.second, right.second) + 1;
        
        if(leftAns && rightAns && diff) {
           ans.first = true;
        }
        else{
            ans.first = false;
        }
        return ans;
    }
    bool isBalanced(Node *root){
        return isBalancedFast(root).first;
    }
    
};

