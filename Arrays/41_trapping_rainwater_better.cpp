// Trapping Rainwater -- better (Leetcode #42)

#include <bits/stdc++.h>
using namespace std;


    int trap(vector<int>& height) {

        int size = height.size();
        vector <int> prefixMax(size, 0);
        vector <int> suffixMax(size, 0);

        // Calculating prefixMax array
        prefixMax[0] = height[0];
        for(int i = 1; i < size; i++){
            prefixMax[i] = max(prefixMax[i - 1], height[i]);
        }
        
        // Calculating suffixMax array
        suffixMax[size - 1] = height[size - 1];
        for(int i = size - 2; i >= 0; i--){
            suffixMax[i] = max(suffixMax[i + 1], height[i]);
        }

        // Calculating trapped rainwater
        int total = 0;

        for(int i = 0; i < size; i++){

            int leftMax = prefixMax[i];
            int rightMax = suffixMax[i];

            total += min(leftMax, rightMax) - height[i];
        }

        return total;
    }

int main(){

    vector <int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    
    int result = trap(height);

    cout << "Trapped Rainwater = " << result << endl;

    //Time complexity = O(3N)
    //Space complexity = O(2N)

    return 0;
}
