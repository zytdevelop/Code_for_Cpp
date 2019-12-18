/*
LeetCode No.559 N叉树的最大深度

给定一个 N 叉树，找到其最大深度。

最大深度是指从根节点到最远叶子节点的最长路径上的节点总数。
*/




/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

/*
递归方法:
class Solution {
public:
    int maxDepth(Node* root) {
        if(root)
        {
            int depth = 0;
            for(int i = 0; i < root->children.size(); i++)
                depth = max(maxDepth(root->children[i]), depth);
                return depth + 1;
        }
        return 0;
    }
};

*/

//深度遍历方法:
class Solution {
public:
    int maxDepth(Node* root) {
        if(!root) return 0;
        int depth = 0;
        queue<Node*> q;
        q.push(root);

        while(!q.empty())
        {
            int size = q.size();
            while(size--)
            {
                for(int i = 0; i != q.front()->children.size(); i++)
                    q.push(q.front()->children[i]);
                q.pop();
            }
            depth++;
        }

        return depth;
    }
};
