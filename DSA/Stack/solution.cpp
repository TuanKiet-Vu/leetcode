class Solution {
public:
    bool isValid(string s) {
        if (s.size() <= 1) return false;
        stack<char> st;
        for (char c : s){
            if (c == ']' || c == '}' || c == ')'){
                if (st.empty()) return false;
                if (c == ')' && st.top() != '(')
                     return false;

                if (c == ']' && st.top() != '[')
                     return false;

                if (c == '}' && st.top() != '{')
                     return false;
                st.pop();
            }
            else 
                st.push(c);
        }
        if (st.empty())
          return true;
        else 
          return false;
    }
};
