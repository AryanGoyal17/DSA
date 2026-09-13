// Prefix to Infix conversion 

#include <bits/stdc++.h>
using namespace std;

void prefixToInfix(string exp){

    stack <string> st;
    int size = exp.size();

    for(int i = size - 1; i >= 0; i--){
        if((exp[i] >= 'a' && exp[i] <= 'z') || (exp[i] >= 'A' && exp[i] <= 'Z') || (exp[i] >= '0' && exp[i] <= '9')){
            st.push(string(1, exp[i]));
        }   
        else{
            string last = st.top();
            st.pop();
            string second_last = st.top();
            st.pop();

            string combined = "(" + last + exp[i] + second_last + ")";
            st.push(combined);
        }      
    }

    cout << "Infix Expression = " << st.top() << endl;
}

int main() {
    string prefix = "*-A/BC-/AKL";
    prefixToInfix(prefix);

    //Time complexity = O(N) [can be O(N^2) due to string concatentation]
    //Space complexity = O(N)

    return 0;
}