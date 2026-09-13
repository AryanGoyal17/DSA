// Next greater element - I (striver) [optimal]

// Brute - Use nested loops [O(N^2) time]

// Optimal solution

#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> arr = {4, 12, 5, 3, 1, 2, 5, 3, 1, 2, 4, 6};
    int size = arr.size();

    vector <int> answer(size);
    stack <int> st;

    for(int i = size - 1; i >= 0; i--){

                while(!st.empty() && st.top() <= arr[i]){
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

    for(int i = 0; i < answer.size(); i++){
        cout << answer[i] << " ";
    }

    //Time complexity - O(2N)
    //Space complexity - O(N) [for stack], O(N) for answer array cant be avoided
}
