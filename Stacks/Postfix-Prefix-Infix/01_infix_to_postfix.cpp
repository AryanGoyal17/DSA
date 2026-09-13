// Infix to postfix conversion

#include <bits/stdc++.h>
using namespace std;

int precedence(char c){

    if(c == '^') return 3;
    else if(c == '*' || c == '/') return 2;
    else if(c == '+' || c == '-') return 1;
    else return -1;
}

void infixToPostfix(string exp){

    string ans;
    stack <char> st;
    int size = exp.size();

    for(int i = 0; i < size; i++){
        if((exp[i] >= 'a' && exp[i] <= 'z') || (exp[i] >= 'A' && exp[i] <= 'Z') || (exp[i] >= '0' && exp[i] <= '9')){
            ans.push_back(exp[i]);
        }
        else if(exp[i] == '('){
            st.push(exp[i]);
        }
        else if(exp[i] == ')'){
            while(!st.empty() && st.top() != '('){
                char ch = st.top();
                st.pop();
                ans.push_back(ch);
            }
            st.pop();
        }
        else{

            while(!st.empty() && precedence(exp[i]) <= precedence(st.top())){
                char answer = st.top();
                st.pop();
                ans.push_back(answer);
            }
            st.push(exp[i]);
        }
    }

      while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
      }

      cout << "Postfix Expression = " << ans << endl;
}

int main() {
    string exp = "(p+q)*(m-n)";  // Infix expression
    cout << "Infix expression: " << exp << endl;
    infixToPostfix(exp);  // Convert the infix expression to postfix
    return 0;

    //Time complexity = O(2N)
    //Space complexity = O(2N)
}