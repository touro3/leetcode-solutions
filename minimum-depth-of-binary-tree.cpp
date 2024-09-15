// resolved by Lucas Tourinho Mamede
// complexity O

#include <bits/stdc++.h>

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution{
public:
    int minDepth(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        std::queue<TreeNode *> q;
        q.push(root);
        int depth = 1;
        while (!q.empty())
        {
            int size = q.size();

            for (int i = 0; i < size; ++i)
            {
                TreeNode *current = q.front();
                q.pop();

                if (current->left == nullptr && current->right == nullptr)
                {
                    return depth;
                }

                if (current->left)
                {
                    q.push(current->left);
                }
                if (current->right)
                {
                    q.push(current->right);
                }
            }
            depth++;
        }
        return depth;
    }
};

//ou 

class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
    std::queue<TreeNode*> q;
    q.push(root);
    int depth = 1; // Iniciamos com a raiz, portanto a profundidade é 1
    
    while (!q.empty()) {
        int size = q.size();
        
        for (int i = 0; i < size; ++i) {
            TreeNode* current = q.front();
            q.pop();
            
            if (current->left == nullptr &&current->right == nullptr) {
                return depth; 
            }

            if (current->left) {
                q.push(current->left);
            }
            if (current->right) {
                q.push(current->right);
            }
        }
        depth++; 
    }
    return depth;
}
};