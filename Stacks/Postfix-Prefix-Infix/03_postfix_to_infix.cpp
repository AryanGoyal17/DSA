// Postfix to Infix conversion

#include <bits/stdc++.h>
using namespace std;

void postfixToInfix(string exp){

    stack <string> st;
    int size = exp.size();

    for(int i = 0; i < size; i++){
        if((exp[i] >= 'a' && exp[i] <= 'z') || (exp[i] >= 'A' && exp[i] <= 'Z') || (exp[i] >= '0' && exp[i] <= '9')){
            st.push(string(1, exp[i]));
        }   
        else{
            string last = st.top();
            st.pop();
            string second_last = st.top();
            st.pop();

            string combined_exp = "(" + second_last + exp[i] + last + ")";
            st.push(combined_exp);
        }
    }

    cout << "Infix Expression = " << st.top() << endl;
}

int main() {
    string postfix = "AB-DE+F*/";
    postfixToInfix(postfix);

    //Time complexity = O(N) [can be O(N^2) due to string concatentation]
    //Space complexity = O(N)

    return 0;
}