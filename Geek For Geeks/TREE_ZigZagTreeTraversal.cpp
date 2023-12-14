#include<bits/stdc++.h>
using namespace std;

class Node{
     public:
     int data;
     Node* left;
     Node* right;

     Node(int data) {
          this -> data = data;
          this -> left = NULL;
          this -> right = NULL;
     }
};


class Solution {
public:
     vector<vector<int>> zigzagLevelOrder(Node* root) {
          vector<vector<int>> result;
          if(root == NULL) return result;
               
          bool leftToRight = true;
          queue<Node*> q;
          q.push(root);

          while(!q.empty()){
               int size = q.size();
               // Elements are in the queue in this level should be contained in a array
               vector<int> temp(size);

               // Level Process
               for (int i = 0; i < size; i++) {
                    Node* frontNode = q.front();
                    q.pop();
                         
                    // Right to left insert or Left to right insert
                    int index = leftToRight ? i : size - i - 1;
                    temp[index] = frontNode -> data;

                    if(frontNode -> left){
                         q.push(frontNode -> left);
                    }
                    if(frontNode -> right){
                         q.push(frontNode -> right);
                    }
               }

               // Direction need to be change after 1 level
               leftToRight = !leftToRight;
               
               result.push_back(temp);
          }
          return result;
     }
};