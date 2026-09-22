// Next Smaller Element (find next smaller element to the left) -- Optimal

// Optimal Solution(Increasing Stack)

#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> arr = {4, 5, 2, 10, 8};
    int size = arr.size();

    vector <int> answer(size, 0);
    stack <int> st;

    for(int i = 0; i < size; i++){
        while(!st.empty() && arr[i] <= st.top()){
            st.pop();
        }
        if(st.empty()){
            answer[i] = -1;
        }
        else{
            answer[i] = st.top();
        }

        st.push(arr[i]);
    }

    for(int i = 0; i < size; i++){
        cout << answer[i] << " ";
    }

    //Time complexity = O(2N)
    //Space complexity = O(2N) -- in which O(N) is just to store the answer

    return 0;
}