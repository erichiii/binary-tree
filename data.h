#pragma once

class Node {
public:
    int key;
    Node* left;
    Node* right;

    Node(int key) {
        this->key = key;
        this->left = NULL;
        this->right = NULL;
    }
};

class BST {
private:
    Node* root;

    void insertNode(Node*& node, int key);
    Node* searchNode(Node* node, int key);
    Node* findMin(Node* node);
    Node* deleteNode(Node*& node, int key);
        
    void inorderTraversal(Node* node);
    void preorderTraversal(Node* node);
    void postorderTraversal(Node* node);

    void displayBST(Node* node, int space);

public:
    BST() { this->root = NULL; }

    void insert(int key);
    Node* search(int key);
    void remove(int key);
    void inorder();
	void preorder();
	void postorder();
	void display();
};

