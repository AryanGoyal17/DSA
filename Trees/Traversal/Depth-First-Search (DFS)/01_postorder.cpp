// Postorder Traversal - Leetcode #145

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

#include <bits/stdc++.h>
using namespace std;

// class Solution {

// private: //This is the helper function [we can do without it but it leads to creation of vectors- left & right [increases sc]]

//     void postorder(TreeNode* root, vector <int> &result){
//         if(root == nullptr){
//             return;
//         }

//         postorder(root -> left, result);
//         postorder(root -> right, result);
//         result.push_back(root -> val);
//     }
// public:
//     vector<int> postorderTraversal(TreeNode* root) {
//         vector <int> result;
//         postorder(root, result);
//         return result;
//     }
// };

int main(){

    //Time complexity = O(N)
    //Space complexity = O(N) [for answer vector], best/avg - O(logN[base2]) [for balanced BT], O(N) - for skewed/degenerate BT
    
    // The space complexity apart from answer vector is for recursion stack space!
    
    return 0;
}