#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Insertting
Node* insert(Node* root, int val) {
    if (root == NULL)
        return new Node(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

// Kth smallest using inorder
int kthSmallest(Node* root, int& k) {
    if (root == NULL)
        return -1;

    int left = kthSmallest(root->left, k);
    if (left != -1)
        return left;

    k--;
    if (k == 0)
        return root->data;

    return kthSmallest(root->right, k);
}

int main() {
    Node* root = NULL;

    // Creating BST
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    int k = 3;

    int result = kthSmallest(root, k);

    if (result != -1)
        cout << "Kth Smallest Element: " << result;
    else
        cout << "Invalid k";

    return 0;
}