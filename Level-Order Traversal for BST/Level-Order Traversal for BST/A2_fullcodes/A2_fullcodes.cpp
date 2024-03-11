#include <iostream>
#include <queue>

class TreeNode {
public:
    int key;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : key(value), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
private:
    TreeNode* root;

public:
    BinarySearchTree() : root(nullptr) {}

    void insert(int value) {
        root = insertRec(root, value);
    }

    void remove(int value) {
        root = removeRec(root, value);
    }

    bool search(int value) {
        return searchRec(root, value);
    }

    TreeNode* getRoot() {
        return root;
    }

    void levelOrderTraversal() {
        levelOrderTraversal(root);
    }

private:
    TreeNode* insertRec(TreeNode* root, int value) {
        if (root == nullptr)
            return new TreeNode(value);

        if (value < root->key)
            root->left = insertRec(root->left, value);
        else if (value > root->key)
            root->right = insertRec(root->right, value);

        return root;
    }

    TreeNode* removeRec(TreeNode* root, int value) {
        // Implement your remove logic here
        return root;
    }

    bool searchRec(TreeNode* root, int value) {
        if (root == nullptr || root->key == value)
            return root != nullptr;

        if (value < root->key)
            return searchRec(root->left, value);
        else
            return searchRec(root->right, value);
    }

    void levelOrderTraversal(TreeNode* root) {
        if (root == nullptr) return;

        std::queue<TreeNode*> nodeQueue;
        nodeQueue.push(root);

        while (!nodeQueue.empty()) {
            TreeNode* current = nodeQueue.front();
            nodeQueue.pop();

            // Processing the node (print to the console, perform other operations, etc.)
            std::cout << current->key << " ";

            if (current->left != nullptr)
                nodeQueue.push(current->left);

            if (current->right != nullptr)
                nodeQueue.push(current->right);
        }
    }
};

int main() {

    BinarySearchTree bst;

    // Add nodes to the BST
    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);

    // Run level-order traversal
    std::cout << "Level Order Traversal: ";
    bst.levelOrderTraversal();

    return 0;
}
