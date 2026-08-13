// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */

// class Solution {
// public:
//     TreeNode* invertTree(TreeNode* root) {
//         if(root == NULL) return NULL;

//         queue<TreeNode*> q;
//         q.push(root);

//         while(!q.empty()){
//             TreeNode* current = q.front();
//             q.pop();

//             swap(current->left, current->right);

//             if(current->left) q.push(current->left);
//             if(current->right) q.push(current->right);
//         }
//         return root;
//     }
// };

class Solution{
public:
    TreeNode* invertTree(TreeNode* root){
        if(root == NULL) return NULL;

        TreeNode* left = invertTree(root->left);

        TreeNode* right = invertTree(root->right);

        root->left = right;
        root->right = left;

        return root;
    }
};