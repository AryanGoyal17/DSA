// Trapping Rainwater -- brute (Leetcode #42)

#include <bits/stdc++.h>
using namespace std;

    int calculate_left_max(int index, vector <int> &height){

        int maximum = height[index];

        for(int i = index - 1; i >= 0; i--){
            maximum = max(height[i], maximum);
        }
        return maximum;
    }

    int calculate_right_max(int index, vector <int> &height, int size){

        int maximum = height[index];

        for(int i = index + 1; i < size; i++){
            maximum = max(height[i], maximum);
        }
        return maximum;
    }

    int trap(vector<int>& height) {

        int total = 0;
        int size = height.size();

        for(int i = 0; i < size; i++){

            int leftMax = calculate_left_max(i, height);
            int rightMax = calculate_right_max(i, height, size);

            int trapped_water = min(leftMax, rightMax) - height[i];
            total = total + trapped_water;
        }

        return total;       
    }

int main(){

    vector <int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    
    int result = trap(height);

    cout << "Trapped Rainwater = " << result << endl;

    //Time complexity = O(N^2)
    //Space complexity = O(1)
}
