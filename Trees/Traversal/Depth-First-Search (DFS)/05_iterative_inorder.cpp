// Iterative Inorder traversal - using 1 stack

#include <bits/stdc++.h>
using namespace std;

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
// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         stack <TreeNode*> st;
//         vector <int> result;
//         if(root == NULL){
//             return result;
//         }
//         TreeNode* node = root;

//         while(true){
//             if(node != NULL){
//                 st.push(node);
//                 node = node -> left;
//             }
//             else{
//                 if(st.empty()){
//                     return result;
//                 }
//                 node = st.top();
//                 st.pop();
//                 result.push_back(node -> val);
//                 node = node -> right;
//             }
//         }

//         return result;
//     }
// };

int main(){

    // Time complexity = O(N)
    // Space complexity = stack - O(N) -> worst, result - O(N)

    return 0;
}