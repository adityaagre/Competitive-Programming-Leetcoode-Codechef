class Solution {
public:
    TreeNode* bstToGst(TreeNode* treeRoot) {
        // Store the inorder traversal in an array.
        vector<int> inorderValues;
        traverseInorder(treeRoot, inorderValues);

        // Reverse the array to get descending order.
        reverse(inorderValues.begin(), inorderValues.end());

        // Modify the values in the tree.
        updateTreeValues(treeRoot, inorderValues);

        return treeRoot;
    }

private:
    // Perform any traversal of your choice to store node values.
    void traverseInorder(TreeNode* node, vector<int>& values) {
        if (node == nullptr) {
            return;
        }
        traverseInorder(node->left, values);
        values.push_back(node->val);
        traverseInorder(node->right, values);
    }
    // Function to modify the values in the tree.
    void updateTreeValues(TreeNode* node, vector<int>& values) {
        if (node == nullptr) {
            return;
        }
        updateTreeValues(node->left, values);
        updateTreeValues(node->right, values);

        int greaterSum = 0;
        // Replace node with values greater than the current value.
        for (auto value : values) {
            if (value > node->val) {
                greaterSum += value;
            } else {
                break;
            }
        }

        node->val += greaterSum;
    }
};
