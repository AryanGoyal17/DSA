// Level Order Traversal (Leetcode Medium -- #102)

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
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         queue <TreeNode*> q1;
//         vector <vector <int>> result;
        
//         if(root == NULL){
//             return result;
//         }

//         q1.push(root);

//         while(!q1.empty()){

//             int size = q1.size();
//             vector <int> level;

//             for(int i = 0; i < size; i++){
                
//                 TreeNode* node = q1.front();
//                 q1.pop();

//                 if(node -> left != NULL){
//                     q1.push(node->left);
//                 }
//                 if(node -> right != NULL){
//                     q1.push(node -> right);
//                 }
                

//                 level.push_back(node -> val);
//             }
//             result.push_back(level);
//         }

//         return result;
//     }
// };

int main(){

    // Time complexity -- O(N)
    // Space complexity -- O(N) -- for queue, O(no of levels) -- for result vector

    return 0;
}