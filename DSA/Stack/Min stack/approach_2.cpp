class MinStack {
public:
    stack<long long> st;
    long long  curMin = INT_MAX;
    MinStack() { }
    
    void push(long long value) {
        if (st.empty()) {
           st.push(value);
           curMin = value;
        }
        else if (value >= curMin)
           st.push(value);
        else{
           st.push (2*value - curMin);
           curMin = value;
        }
    }
    
    void pop() {
        long long t = st.top();
        st.pop();
        
        if (t < curMin)
          curMin = 2*curMin - t;

    }
    
    int top() {
        if (st.top() >= curMin)
          return st.top();
        else
          return curMin;
    }
    
    int getMin() {
        return curMin;
    }
};
