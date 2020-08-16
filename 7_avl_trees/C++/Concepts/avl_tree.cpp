#include <iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* left;
    Node* right;
    Node(int value){
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

class AVLTree{
    public:
    Node* root;
    int value;
    Node* left;
    Node* right;

    AVLTree(int value){
        this->value = value;
    }
    AVLTree(){
    }
    
    void insert(int value){
        root = insert(root, value);
    }
    Node* insert(Node* root, int value){
        if (root == NULL){
            return new Node(value);
        }
        if (value < root->value){
            root->left = insert(root->left, value);
        }
        else {
            root->right = insert(root->right, value);
        }
        return root;
    }

};

int main(){
    AVLTree avl;
    avl.insert(10);
    avl.insert(15);
    avl.insert(5);
    cout << avl.root->value << endl;
    return 0;
}