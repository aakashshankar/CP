#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

class Node {
    int data;
    Node* left;
    Node* right;
public:
    Node()
    :   data(0), left(NULL), right(NULL)
    {
    }
    Node(int val)
    :   data(val), left(NULL), right(NULL)
    {
    }
    Node* insert(Node* root, int val);
    void inorder(Node* root, vector<int>& traversal);
    void preorder(Node* root, vector<int>& traversal);
    void postorder(Node* root, vector<int>& traversal);
};
typedef Node* nodeptr;

nodeptr Node::insert(nodeptr root, int val) {
    if(root==NULL){
        return new Node(val);
    }else{
        if(val<root->data){
            root->left=insert(root->left, val);
        }else{
            root->right=insert(root->right, val);
        }
    }
    return root;
}

void Node::inorder(nodeptr root, vector<int>& traversal){
    if(root==NULL){
        return;
    }
    inorder(root->left, traversal);
    cout << root->data << " ";
    traversal.push_back(root->data);
    inorder(root->right, traversal);
}

void Node::preorder(nodeptr root, vector<int>& traversal){
    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    traversal.push_back(root->data);
    preorder(root->left, traversal);
    preorder(root->right, traversal);
}

void Node::postorder(nodeptr root, vector<int>& traversal){
    if(root==NULL){
        return;
    }
    postorder(root->left, traversal);
    postorder(root->right, traversal);
    cout << root->data << " ";
    traversal.push_back(root->data);
}


int main(int argc, char **argv) {
    ios::sync_with_stdio(0);
    vector<int> in, pre, post;
    int x;
    Node temp;
    nodeptr root=NULL;
    cout << "Enter elements of BST: (enter -999 to quit)\n";
    while(true){
        cin >> x;
        if(x==-999)
            break;
        root=temp.insert(root, x);
    }
    cout << "Inorder: \n";
    temp.inorder(root, in);
    return 0;
}
