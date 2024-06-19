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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if (root == nullptr) return 0;
        int rangeLeft = rangeSumBST(root->left, low, high), rangeRight = rangeSumBST(root->right, low, high);
        int sum = rangeLeft + rangeRight;
        if (low <= root->val && root->val <= high) sum += root->val;
        return sum;
    }
};