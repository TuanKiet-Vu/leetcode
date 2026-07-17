class Solution {
public:
    bool isInt (string s){
       int n = s.size();
       int i = 0;

       if (s[0] == '-') 
          i++;
       if (i == n) 
          return false;

       for (; i<n ; i++)
          if (!isdigit(s[i]))
            return false;

       return true;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (string str : tokens){
            if (isInt(str))
                st.push (stoi(str));
                
            else{
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                
                if (str == "/")
                    st.push (b/a);
                else if (str == "-")
                    st.push(b-a);
                else if (str == "+")
                    st.push(b+a);
                else if (str == "*")
                    st.push(b*a);
            }
        }
        return st.top();
    }
};
