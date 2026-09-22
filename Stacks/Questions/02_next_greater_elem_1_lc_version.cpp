// NGE-1 [Leetcode #496] -- optimal

#include <bits/stdc++.h>
using namespace std;

// 1 -- Using hasharray [as per leetcode constraints]

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        // using an hasharray

        int hash[100001];
        vector <int> ans(nums1.size(), 0);

        stack <int> st;
        int size = nums2.size();

        for(int i = size - 1; i >= 0; i--){
            while(!st.empty() && nums2[i] >= st.top()){
                st.pop();
            }

            if(st.empty()){
                hash[nums2[i]] = -1;
            }

            else{
                hash[nums2[i]] = st.top();
            }

            st.push(nums2[i]);
        }

        for(int i = 0; i < nums1.size(); i++){
            ans[i] = hash[nums1[i]];
        }
        
        return ans;
    }
};

// Time complexity = O(3N) -> worst
// Space complexity = O(2N) + O(hash array size) -> worst

// In leetcode it was given that nums2[i] and nums1[i] are between 0 and 10^4

//------------------------------------------------------------------------------------------------------------------//

// 2-- Using hashmap

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        // using an hasharray

        unordered_map <int, int> m;
        vector <int> ans(nums1.size(), 0);

        stack <int> st;
        int size = nums2.size();

        for(int i = size - 1; i >= 0; i--){
            while(!st.empty() && nums2[i] >= st.top()){
                st.pop();
            }

            if(st.empty()){
                m[nums2[i]] = -1;
            }

            else{
                m[nums2[i]] = st.top();
            }

            st.push(nums2[i]);
        }

        for(int i = 0; i < nums1.size(); i++){
            ans[i] = m[nums1[i]];
        }
        
        return ans;
    }
};

// After ingoring constant [worst case]
// Time complexity -- O(N) [without considering collision], O(N^2) [considering collision]
// Space complexity -- O(N)

int main(){
    return 0;
}