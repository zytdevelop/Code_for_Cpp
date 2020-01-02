/* 
LeetCode No.589/No.590
题目：N叉树的前序遍历(后序遍历)

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

//迭代的方式实现N叉树的前序遍历
class Solution {
public:
    vector<int> preorder(Node* root) {
    
        vector<int> res;
        if(root == nullptr) return res;

        stack<Node*> st;
        st.push(root);

        while(!st.empty())
        {
            Node* pNode = st.top();
            st.pop();

            if(pNode)
            {
                res.push_back(pNode->val);
            }
            else
            {
                continue;
            }

            if(!pNode->children.empty())
            {
                int size = pNode->children.size();
                for(int i = size - 1;i >= 0; i--)
                {
                    Node* n = pNode->children[i];
                    if(n) st.push(n);
                }
            }
        }

        return res;
    }
};


//递归实现N叉树的后序遍历
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
class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> res;
        if(!root) return res;
        recursivePreorder(root,res);
        return res;
    }

    void recursivePreorder(Node* pNode, vector<int>& res){
        if(!pNode) return;

        for(int i = 0; i < pNode->children.size(); i++)
        {
            Node *n = pNode->children[i];
            if(n) recursivePreorder(n,res);
        }
        res.push_back(pNode->val);

    }

    
};
