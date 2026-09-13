// Prefix to Postfix conversion

#include <bits/stdc++.h>
using namespace std;

void prefixToPostfix(string exp){

    stack <string> st;
    int size = exp.size();

    for(int i = size - 1; i >= 0; i--){
        if(isalnum(exp[i])){
            st.push(string(1,exp[i]));
        }
        else{
            string last = st.top();
            st.pop();
            string second_last = st.top();
            st.pop();

            string combined = last + second_last + exp[i];
            st.push(combined);
        }
    }

    cout << "Postfix Conversion = " << st.top() << endl;

}

int main() {
    string prefix = "*-A/BC-/AKL";
    prefixToPostfix(prefix);

    //Time complexity = O(N) [can be O(N^2)]
    //Space complexity = O(N)

    return 0;
}