// Iterative postorder traversal -- using 1 stack

#include <bits/stdc++.h>
using namespace std;

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
//     vector<int> postorderTraversal(TreeNode* root) {
//         stack <TreeNode*> st;
//         vector <int> result;
//         if(root == NULL){
//             return {};
//         }
//         TreeNode* curr = root;

//         while(curr != NULL || !st.empty()){
//             if(curr != NULL){
//                 st.push(curr);
//                 curr = curr -> left;
//             }
//             else{
//                 TreeNode* temp = st.top() -> right;
//                 if(temp == nullptr){
//                     temp = st.top();
//                     st.pop();
//                     result.push_back(temp -> val);

//                     while(!st.empty() && temp == st.top() -> right){
//                         temp = st.top();
//                         st.pop();
//                         result.push_back(temp -> val);
//                     }
//                 }
//                 else{
//                     curr = temp;
//                 }
//             }
//         }

//         return result;
//     }
// };


int main(){

    //Time complexity -- O(2N)
    //Space complexity -- O(N) -> stack(worst), O(N) - result

    return 0;
}