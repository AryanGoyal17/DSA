// Leetcode #20 - Valid Paranthesis (EASY)

// class Solution {
// public:
//     bool isValid(string s) {

//         stack <char> st;
//         int size = s.size();

//         for(int i = 0; i < size; i++){
//             if(s[i] == '(' || s[i] == '{' || s[i] == '['){
//                 st.push(s[i]);
//             }
//             else{

//                 if(st.empty()) return false;

//                 char bracket = st.top();
//                 st.pop();

//                 if((s[i] == ')' && bracket != '(') || (s[i] == '}' && bracket != '{') || (s[i] == ']' && bracket != '[')) return false;
                
//             }
//         }

//         return st.empty();
        
//     }
// };

// This is optimal solution --- time complexity O(N), space complexity O(N)