class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        int n = temperatures.size();
        vector<int> rs(n,0);
        for (int i = 0 ; i<n ; i++){
            while(!st.empty() && temperatures[i] > temperatures[st.top()]){
                rs[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
           return rs; 
    }
};
