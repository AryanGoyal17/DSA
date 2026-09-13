// Next Greater Element - II (Leetcode #503)

// Optimal solution -- using monotonic stack + concept of circular array

#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> arr = {2, 10, 12, 1, 11};
    int size = arr.size();
    vector <int> answer(size);
    stack <int> st;




    for(int i = 2*size - 1; i >= 0; i--){
        int index = i % size;
        while(!st.empty() && st.top() <= arr[index]){
            st.pop();
        }

        if(i < size){
            if(st.empty()){
                answer[i] = -1;
            }
            else{
                answer[i] = st.top();
            }
        }

        st.push(arr[index]);
    }

    for(int i = 0; i < size; i++){
        cout << answer[i] << " ";
    }


    //Time complexity - O(4N)
    //Space complexity - O(2N) [stack] + O(N) [just to store the answer]

    return 0;
}
