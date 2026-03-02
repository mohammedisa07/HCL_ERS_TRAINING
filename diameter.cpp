#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

int height(Node* root, int &diameter) {
    if (root == NULL)
        return 0;

    int left = height(root->left, diameter);
    int right = height(root->right, diameter);

    diameter = max(diameter, left + right);

    return 1 + max(left, right);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    int diameter = 0;
    height(root, diameter);

    cout << "Diameter of tree: " << diameter;

    return 0;
}