class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.length(); i++) {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            if(st.empty() && (s[i]==')' || s[i]=='}' || s[i]==']'))
                return false;
            else if(s[i]==')' && !st.empty() && st.top()!='(')
                return false;
            else if(s[i]=='}' && !st.empty() && st.top()!='{')
                return false;
            else if(s[i]==']' && !st.empty() && st.top()!='[')
                return false;
            else if(s[i]==')' || s[i]=='}' || s[i]==']')
                st.pop();
        }
        if(!st.empty())
            return false;
        return true;
    }
};
