// Program to perform pre-order traversal of a hierarchical data structure.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void preOrderTraversal(Node* root) {
    if (root == nullptr) return;

    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Pre-order traversal: ";
    preOrderTraversal(root);
    cout << endl;

    return 0;
}
