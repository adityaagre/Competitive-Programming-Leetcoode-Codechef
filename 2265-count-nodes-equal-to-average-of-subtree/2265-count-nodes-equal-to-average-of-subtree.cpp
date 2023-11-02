/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int counter = 0;
    
    int averageOfSubtree(TreeNode* root) 
    {
        
        rec_traverse(root);
        return counter;
        
    }
    
    pair<int,int> rec_traverse(TreeNode* root)
    {
        if(root == NULL)
        {
            return {0,0};
        }
        
        else
        {
            pair<int,int> left;
            pair<int, int> right;
            
            left = rec_traverse(root->left);
            right = rec_traverse(root->right);
            
            int sum_of_subtree = root->val + left.first + right.first;
            int count = 1 + left.second + right.second;
            
            if(root -> val == sum_of_subtree/count)
            {
                counter++;
            }
            
            return{sum_of_subtree, count};
        }
    }
};