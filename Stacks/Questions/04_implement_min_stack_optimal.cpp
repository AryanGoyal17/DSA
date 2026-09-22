// Design a MinStack [optimal]

#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    MinStack() {
        
    }

    stack <long long> st;
    long long  minimum = LLONG_MAX;
    
    void push(int value) {
        long long val = value;
        if(st.empty()){
            st.push(val);
            minimum = val;
        }       
        else{
            if(val >= minimum){
                st.push(val);
            }
            else{
                st.push(2LL*val - minimum);
                minimum = val;
            }
        }
    }
    
    void pop() {

        if(st.empty()){
            return;
        }
        else{

            long long x = st.top();
            st.pop();

            if(x < minimum){
                minimum = 2LL*minimum - x;
            }
        }
        
    }
    
    int top() {

        if(st.empty()){
            return -1;
        }
        else if(st.top() < minimum){
            return minimum;
        }
        else{
            return st.top();
        }
        
    }
    
    int getMin() {
        return minimum;
    }
};

// Time complexity = O(1) [for all push, pop, top, getMin operations]
// Space complexity = O(N)

int main(){
    return 0;
}