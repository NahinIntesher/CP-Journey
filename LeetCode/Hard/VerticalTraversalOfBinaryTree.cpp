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


/*  Leet Code: Using Vector of Vector(have to use multiset for unique value) */
class Solution {
public:
    vector<vector<int>> verticalTraversal(Node* root) {
        map<int, map<int,multiset<int> > > mp;
        queue<pair<Node*, pair<int,int> > > q;
        vector<vector<int>> ans;

        if(root == NULL){
            return ans;
        }
        q.push({root, {0,0}});

        while(!q.empty()){
            pair<Node*, pair<int,int> > temp = q.front();
            q.pop();
            Node* frontNode = temp.first;
            int hd = temp.second.first; // horizontal distance
            int lvl = temp.second.second; // level 

            mp[hd][lvl].insert(frontNode->data);

            if(frontNode->left){
                q.push({frontNode->left, {hd-1, lvl+1}});
            }
            if(frontNode->right){
                q.push({frontNode->right, {hd+1, lvl+1}});
            }
        }

        for(auto i: mp){
            vector<int> temp;
            for(auto j: i.second){
                temp.insert(temp.end(), j.second.begin(), j.second.end());
            }
            ans.push_back(temp);
        }
        return ans;
    }
};