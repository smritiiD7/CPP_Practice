class MinStack {  
    private:
    stack<int> st;
    stack<int> st2;
public:
     
    /** initialize your data structure here. */
   
    MinStack() {
        
    }
    
    void push(int val) {
       st.push(val); 
        if (st2.empty() || val <= st2.top())  st2.push(val);	  
    }
    
    void pop() {
          if(st2.top()==st.top())
            st2.pop();
        st.pop();
      
    }
    
    int top() {
        int x = st.top();
        return x;
    }
    
    int getMin() {
       return st2.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */