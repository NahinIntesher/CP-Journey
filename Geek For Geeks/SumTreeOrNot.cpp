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


// Should return true if tree is Sum Tree, else false
class Solution{
    public:
    pair<bool, int> sumNode(Node* root){
        if(root == NULL){
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        if(root -> left == NULL && root -> right == NULL){
            pair<bool, int> p = make_pair(true, root -> data);
            return p;
        }

        pair<bool, int> leftSum = sumNode(root -> left);
        pair<bool, int> rightSum = sumNode(root -> right);

        bool left = leftSum.first;
        bool right = rightSum.first;

        bool current = root -> data == (leftSum.second + rightSum.second);

        pair<bool, int> ans;
        
        if(left && right && current){
            ans.first = true;
            ans.second = 2 * root -> data;
            //  2 * root -> data = root -> data + (leftSum.second + rightSum.second);
        }
        else{
            ans.first = false;
        } 

        return ans;
    }

    bool isSumTree(Node* root){
        return sumNode(root).first;
    }
};
