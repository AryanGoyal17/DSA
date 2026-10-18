// Inorder Traversal of BT - Leetcode #94

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

// private:

//     void inorder(TreeNode* root, vector <int> &result){

//         if(root == nullptr){
//             return;
//         }

//         inorder(root -> left, result);
//         result.push_back(root -> val);
//         inorder(root -> right, result);
//     }
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector <int> result;
//         inorder(root, result);
//         return result;
//     }
// };

int main(){

    //Time complexity = O(N)
    //Space complexity = O(N) [for answer vector], best/avg - O(logN[base2]) [for balanced BT], O(N) - for skewed/degenerate BT
    
    // The space complexity apart from answer vector is for recursion stack space!
    
    return 0;
}