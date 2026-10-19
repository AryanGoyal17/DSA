// Iterative pretorder traversal -- (stack is used here)

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
//     vector<int> preorderTraversal(TreeNode* root) {
//         stack <TreeNode*> st;
//         vector <int> result;
//         if(root == nullptr){
//             return {};
//         }
//         st.push(root);

//         while(!st.empty()){
//             TreeNode* node = st.top();
//             st.pop();

//             if(node -> right != nullptr){
//                 st.push(node -> right);
//             }
//             if(node -> left != nullptr){
//                 st.push(node -> left);
//             }

//             result.push_back(node -> val);
//         }

//         return result;
//     }
// };

int main(){

    // Time complexity = O(N)
    // Space complexity = stack - O(N) -> worst, result - O(N)

    return 0;
}

