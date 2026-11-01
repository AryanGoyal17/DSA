// Diameter of Binary Tree -- Brute

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
// private:

//     int height(TreeNode* root){
//         if(root == nullptr){
//             return 0;
//         }

//         int lh = height(root -> left);
//         int rh = height(root -> right);

//         return 1 + max(lh, rh);
//     }

//     void finding_diameter(TreeNode* root, int &diameter){
//         if(root == nullptr){
//             return;
//         }

//         int lh = height(root -> left);
//         int rh = height(root -> right);

//         diameter = max(diameter, lh + rh);

//         finding_diameter(root -> left, diameter);
//         finding_diameter(root -> right, diameter);
//     }

// public:
//     int diameterOfBinaryTree(TreeNode* root) {
//         int diameter = 0;
//         finding_diameter(root, diameter);
//         return diameter;
//     }
// };

int main(){

    //Time complexity -- O(N^2)
    //Space complexity -- O(N)

    return 0;
}