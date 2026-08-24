// Sort array of 0,1,2 (sort colors - leetcode #75) - optimal

// THE DUTCH NATIONAL FLAG ALGORITHM

#include <bits/stdc++.h>
using namespace std;

void SortColors(vector<int> &arr){

    int iterations = 0;
    
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            mid++;
            low++;
            iterations++;
        }

        else if(arr[mid] == 1){
            mid++;
            iterations++;
        }

        else{
            swap(arr[mid], arr[high]);
            high--;
            iterations++;
        }
    }

    cout << "Number of iterations(visualizing time complexity) = " << iterations << endl;

}

int main(){
    vector <int> arr = {0, 0, 1, 2, 0, 1, 2, 2, 1, 0, 0, 1}; 

    SortColors(arr);

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    //Time complexity = O(N) - iterations = 12(which is equal to array size)
    //Space complexity = O(1)

    return 0;
}