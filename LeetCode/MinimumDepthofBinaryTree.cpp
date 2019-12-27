/*

LeetCode No.111 二叉树的最小深度

给定一个二叉树,找出其最小深度.
最小深度是从根节点到最近叶子节点的最短路径上的节点数量。
说明: 叶子节点是指没有子节点的节点。

思路:
递归遍历二叉树,返回左右子树深度的较小值.

*/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == nullptr)
            return 0;
        if(root->left == nullptr && root->right ==nullptr)
            return 1;

        
        int minDep = INT_MAX;

        if(root->left != nullptr)
        {
            minDep = min(minDepth(root->left),minDep); 
        }
        if(root->right != nullptr)
        {
            minDep = min(minDepth(root->right), minDep);
        }

        return minDep + 1;
    }
};
