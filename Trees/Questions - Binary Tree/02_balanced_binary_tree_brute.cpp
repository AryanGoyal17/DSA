// Check if tree is height-balanced(Brute Approach) -- Leetcode #110

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
//  */
// class Solution {

// private:

//     int height(TreeNode* node){
//         if(node == nullptr){
//             return 0;
//         }

//         int left_height = height(node -> left);
//         int right_height = height(node -> right);

//         return 1 + max(left_height, right_height);
//     }
// public:
//     bool isBalanced(TreeNode* root) {
//         if(root == nullptr){
//             return true;
//         }

//         int height_left = height(root -> left);
//         int height_right = height(root -> right);

//         if(abs(height_left - height_right) > 1){
//             return false;
//         }

//         bool left = isBalanced(root -> left);
//         bool right = isBalanced(root -> right);

//         if(!left || !right){
//             return false;
//         } 

//         return true;
//     }
// };

int main(){
    //Time complexity -- O(N^2)
    //Space complexity -- O(N)
}