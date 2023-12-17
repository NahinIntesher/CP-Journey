#include<bits/stdc++.h>
using namespace std;
#define printVec(v) for(auto i: v) cout << i << " "; cout << endl


vector<int> V = {1, 3, 5, 17, 16, 7, 11, 6, 2, 3, 9, 17, 13, -1};
int i = 0;

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

Node* insertIntoBST(Node* &root, int value){
    if(root == NULL){
        root = new Node(value);
        return root;
    }
    if(value > root -> data)
        root -> right = insertIntoBST(root -> right, value);
    else
        root -> left = insertIntoBST(root -> left, value);
    return root;
}
void takeInput(Node* &root){
    int data = V[i++];
    while (data != -1){
        insertIntoBST(root, data);
        data = V[i++];
    }
}
vector<vector<Node*>> levelWiseTraversal(Node* root){
    vector<vector<Node*>> Tree;
    if(root == NULL) return Tree;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        vector<Node*> level;
        while (!q.empty()){
            level.push_back(q.front());
            q.pop();
        }
        for (int i = 0; i < level.size(); i++){
            Node* tempNode = level[i];
            if(tempNode -> left)
                q.push(tempNode -> left);
            if(tempNode -> right)
                q.push(tempNode -> right);
        }
        Tree.push_back(level);
        level.clear();        
    }
    return Tree;
}
void printTree(vector<vector<Node*>> Tree){
    for (int i = 0; i < Tree.size(); i++){ 
        cout << "\t\t";
        for (int j = 0; j < Tree[i].size(); j++)
            cout << Tree[i][j] -> data << " ";
        cout << "\t\t" << endl; 
    } 
}


void inOrder(Node* root, vector<int> &inorder){
    if(root == NULL)
        return;
    inOrder(root -> left, inorder);
    inorder.push_back(root -> data);
    inOrder(root -> right, inorder);
}

void fillPreOrder(Node* &root, vector<int> &inorder, int index){
    if(root == NULL)
        return;
    root -> data = inorder[index++];
    fillPreOrder(root -> left, inorder, index);
    fillPreOrder(root -> right, inorder, index);
}
void preorderTraversal(Node* root){
    if(root == NULL)
        return;
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
 
int main(){
    Node* root = NULL;
    // Taking data to create BST
    takeInput(root);


    cout << "\n\n>> Printing the before data of the tree: \n";
    vector<vector<Node*>> Tree = levelWiseTraversal(root);
    printTree(Tree);
    cout << endl;


    cout << endl;
    vector<int> inorder;
    inOrder(root, inorder);
    cout << "Printing the sorted data: ";
    printVec(inorder);
    // fillPreOrder(root, inorder, 0);


    // cout << "\n\n>> Printing the after data of the tree: \n";
    // vector<vector<Node*>> Tree2 = levelWiseTraversal(root);
    // printTree(Tree2);
    cout << endl;
    preorderTraversal(root);
}