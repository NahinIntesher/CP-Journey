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


/* Geek For Geeks: Only using a vector */
class Solution{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root){
        map<int, map<int,vector<int> > > mp;
        queue<pair<Node*, pair<int,int> > > q;
        vector<int> ans;

        if(root == NULL){
            return ans;
        }
        q.push(make_pair(root, make_pair(0,0)));
        
        while(!q.empty()){
            pair<Node*, pair<int,int> > temp = q.front();
            q.pop();
            Node* frontNode = temp.first;
            int hd = temp.second.first; // horizontal distance
            int lvl = temp.second.second; // level 

            mp[hd][lvl].push_back(frontNode->data);

            if(frontNode->left){
                q.push(make_pair(frontNode->left, make_pair(hd-1, lvl+1)));
            }
            if(frontNode->right){
                q.push(make_pair(frontNode->right, make_pair(hd+1, lvl+1)));
            }
        }
        for(auto i: mp){
            for(auto j: i.second){
                for(auto k: j.second){
                    ans.push_back(k);
                }
            }
        }
        return ans;
    }
};