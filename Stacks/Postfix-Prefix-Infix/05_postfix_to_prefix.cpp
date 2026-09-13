//Postfix to Prefix Conversion

#include <bits/stdc++.h>
using namespace std;

void postfixToPrefix(string exp){
    stack <string> st;
    int size = exp.size();

    for(int i = 0; i < size; i++){
        if(isalnum(exp[i])){
            st.push(string(1,exp[i]));
        }
        else{
            string last = st.top();
            st.pop();
            string second_last = st.top();
            st.pop();

            string combined = exp[i] + second_last + last;
            st.push(combined);
        }
    }

    cout << "Prefix Conversion = " << st.top() << endl;
    
}

int main() {
    string postfix = "ABC/-AK/L-*";
    postfixToPrefix(postfix);

    //Time complexity = O(N) [can be O(N^2) due to string concatentation]
    //Space complexity = O(N)

    return 0;
}