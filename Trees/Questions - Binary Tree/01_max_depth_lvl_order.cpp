// Leetcode #104 -- Max depth of a binary tree (BFS approach)

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
//     int maxDepth(TreeNode* root) {
//         queue <TreeNode*> q1;
//         int depth = 0;

//         if(root == NULL){
//             return depth;
//         }

//         q1.push(root);

//         while(!q1.empty()){

//             int size = q1.size();

//             for(int i = 0; i < size; i++){
//                 TreeNode* node = q1.front();
//                 q1.pop();

//                 if(node -> left != nullptr){
//                     q1.push(node -> left);
//                 }
                
//                 if(node -> right != nullptr){
//                     q1.push(node -> right);
//                 }
//             }
//             depth++;
//         }

//         return depth;
//     }
// };


int main(){

    //Time complexity -- O(N)
    //Space complexity -- O(W) {queue}-[W is the max width of the binary tree] {for worst case(balanced bt) - O(n/2)[approx]}
    //                 -- therefore for balanced bt worst case sc is approximately O(N)

    return 0;
}