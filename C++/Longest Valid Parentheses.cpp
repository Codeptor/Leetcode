class Solution {
public:
    int longestValidParentheses(string s) {
    int longest = 0;
    stack<int> st;
    st.push(-1); // Push a sentinel value onto the stack
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            st.push(i);
        } else {            
            st.pop();      
            if (st.empty()) {
                st.push(i);
            } else {
                longest = max(longest, i - st.top());
            }
        }
    }
    return longest;
}
};