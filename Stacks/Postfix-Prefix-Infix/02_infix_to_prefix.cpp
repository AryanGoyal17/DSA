// Infix to postfix conversion

#include <bits/stdc++.h>
using namespace std;

int precedence(char c){

    if(c == '^') return 3;
    else if(c == '*' || c == '/') return 2;
    else if(c == '+' || c == '-') return 1;
    else return -1;
}

void infixToPrefix(string exp){

    string ans;
    stack <char> st;
    int size = exp.size();

    reverse(exp.begin(), exp.end());


    for(int i = 0; i < size; i++){
        if(exp[i] == '(') exp[i] = ')';
        else if(exp[i] == ')') exp[i] = '(';
    }

    for(int i = 0; i < size; i++){
        if((exp[i] >= 'a' && exp[i] <= 'z') || (exp[i] >= 'A' && exp[i] <= 'Z') || (exp[i] >= '0' && exp[i] <= '9')){
            ans.push_back(exp[i]);
        }
        else if(exp[i] == '('){
            st.push(exp[i]);
        }
        else if(exp[i] == ')'){
            while(!st.empty() && st.top() != '('){
                ans.push_back(st.top());
                st.pop();
            }
            if(st.top() == '(') st.pop();
        } 
        else{

            if(exp[i] == '^'){
                while(!st.empty() && precedence(exp[i]) <= precedence(st.top())){
                    ans.push_back(st.top());
                    st.pop();
                }
        }
        else{
                while(!st.empty() && precedence(exp[i]) < precedence(st.top())){
                    ans.push_back(st.top());
                    st.pop();
                }            
        }
            st.push(exp[i]);
        }
    }

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

    reverse(ans.begin(), ans.end());

    cout << "Prefix Expression = " << ans << endl;

    
}

int main() {
    string exp = "(A+B)*C-D+F";  // Infix expression
    cout << "Infix expression: " << exp << endl;
    infixToPrefix(exp);  // Convert the infix expression to prefix
    return 0;

    //Time complexity = O(3N)
    //Space complexity = O(2N)
}