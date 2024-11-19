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
    void aux(TreeNode *node, vector<int> &ans) {
        if (node == nullptr) return;

        aux(node->left, ans);
        aux(node->right, ans);

        ans.push_back(node->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        aux(root, ans);
        return ans;
    }
};