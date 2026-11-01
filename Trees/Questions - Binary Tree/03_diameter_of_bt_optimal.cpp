// Diameter of Binary Tree (Optimal)

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
//     int logic_to_find_diameter(TreeNode* root, int &diameter) {
//         if(root == nullptr){
//             return 0;
//         }

//         int lh = logic_to_find_diameter(root -> left, diameter);
//         int rh = logic_to_find_diameter(root -> right, diameter);
//         diameter = max(diameter, lh + rh);

//         return 1 + max(lh, rh);
//     }

//     int diameterOfBinaryTree(TreeNode* root){
//         int diameter = 0;
//         logic_to_find_diameter(root, diameter);
//         return diameter;
//     }
// };

int main(){

    //Time complexity -- O(N)
    //Space complexity -- O(N)

    return 0;
}