/*
LeetCode No.889 

题目:根据前序遍历和后续遍历数组构建二叉树
思路:
1.前序遍历数组的首位元素是根节点,后序遍历数组的最后一位是根节点
2.前序遍历第二个节点是左子树的根节点,在后序遍历数组中从第一位到左子树根节点的索引位置是整个二叉树的左子树.
3.然后递归步骤2,完成二叉树的构造.

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
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        int size = post.size(); //前序遍历和后序遍历数组长度一样,选哪个都可以.
        TreeNode* root = new TreeNode(pre[0]); //前序遍历的第一个节点为二叉树的根节点
        if(length == 0 || length == 1) return root;
        
        int L = 0;
        //在后续遍历数组中找到左子树的根节点
        for(int i = 0; i < size; i++)
        {
          if(post[i] == pre[1])
          {
            L = i + 1;
            break;
          }
        }
        
        //定义四个数组来分别存放前序遍历和后序遍历的左右子数组
        vector<int> preLeft(pre.begin() + 1, pre.begin() + L + 1); //第一个元素为二叉树根节点,不包含在内
        vector<int> preRight(pre.begin() + L + 1, pre.end());
        vector<int> postLeft(post.begin(), post.begin() + L);
        vector<int> postRight(post.begin() + L, post.end() - 1);  // 后序遍历最后一个元素是根节点,不包含在内
        
        root->left = constructFromPrePost(preLeft, postLeft);  //递归构建左子树;
        root->right = constructFromPrePost(preRight, postRight);  //递归构建右子树;
        return root; // 构建完成,返回二叉树的根节点
    }
};
