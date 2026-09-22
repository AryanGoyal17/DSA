// Implement min stack [getMin operation should be there along with others]

// Brute -- scan the whole array/stack [O(N) time complexity]


// Better -- done below ---

#include <bits/stdc++.h>
using namespace std;

class MinStack {

public:
    MinStack() {
        
    }

    stack <pair<int, int>> st;
    
    void push(int value) {
        if(st.empty()){
            st.push({value, value});
        }
        else{
            st.push({value, min(value, st.top().second)});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};

// Time complexity = O(1) for all push, pop, top, getMin operations
// Space complexity = O(2N) [stack of pairs used]

int main(){
    return 0;
}