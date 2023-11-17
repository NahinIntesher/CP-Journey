#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};

/* 1st Approach */
class Solution {
  public:
    pair<int, int> findDiameterHeight(Node* root){
        if(root == NULL){
            pair<int, int> p = make_pair(0, 0);
            return p;
        } 

        pair<int, int> diamHeightLeft = findDiameterHeight(root -> left);
        pair<int, int> diamHeightRight = findDiameterHeight(root -> right);
        
        int diamLeft = diamHeightLeft.first;
        int diamRight = diamHeightRight.first;
        int diamLeftRight = diamHeightLeft.second + diamHeightRight.second + 1;

        pair<int, int> ans;
        ans.first = max(max(diamLeft, diamRight), diamLeftRight);
        ans.second =  max(diamHeightLeft.second , diamHeightRight.second) + 1; 
        return ans;
    }

    int diameter(Node* root) {
        return findDiameterHeight(root).first;
    }
    
};

/* 2nd Approach */
class Solution {
    public:
    // Global variable
    int maxDiam = -1;
    
    int height(Node* root){
        if(root == NULL) return 0;

        int lenLeft = height(root -> left);
        int lenRight = height(root -> right);
        
        maxDiam = max(maxDiam, lenLeft+lenRight);
        
        return 1 + max(lenLeft, lenRight);
    }

    int diameter(Node* root) {
        int maxHeight = height(root);

        return maxDiam + 1;
    }
};