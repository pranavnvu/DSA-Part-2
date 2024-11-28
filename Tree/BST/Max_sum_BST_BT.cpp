#include <iostream>
#include <climits>
using namespace std;

// Structure for a tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Function to check if a tree is a BST
bool isBST(Node* node, int min, int max) {
    if (node == nullptr) return true;
    if (node->data < min || node->data > max) return false;
    return isBST(node->left, min, node->data) && isBST(node->right, node->data, max);
}

// Function to calculate the sum of a tree
int sumTree(Node* node) {
    if (node == nullptr) return 0;
    return node->data + sumTree(node->left) + sumTree(node->right);
}

// Function to find the maximum sum BST in a BT
int maxSumBST(Node* root, int& maxSum) {
    if (root == nullptr) return 0;

    // Recursively find the maximum sum BST in left and right subtrees
    int leftSum = maxSumBST(root->left, maxSum);
    int rightSum = maxSumBST(root->right, maxSum);

    // Check if the current tree is a BST
    if (isBST(root, INT_MIN, INT_MAX)) {
        // Calculate the sum of the current BST
        int currentSum = sumTree(root);
        // Update the maximum sum if needed
        maxSum = max(maxSum, currentSum);
        return currentSum; // Return the sum of the current BST
    }

    // If not a BST, return -1 to indicate failure
    return -1;
}

// Wrapper function to initiate the process
int maxSumBSTInBT(Node* root) {
    int maxSum = 0;
    maxSumBST(root, maxSum);
    return maxSum;
}

// Example usage
int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(1);
    root->left->right = new Node(8);
    root->right->right = new Node(7); // This makes the right subtree not a BST

    cout << "Maximum sum of BST in BT: " << maxSumBSTInBT(root) << endl;

    return 0;
}
