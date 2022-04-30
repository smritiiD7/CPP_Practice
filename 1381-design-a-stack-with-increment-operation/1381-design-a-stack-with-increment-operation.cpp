class CustomStack {
   
public:
    int n;
     vector<int> v;
    CustomStack(int maxSize) {
        n = maxSize;
    }
    
    void push(int x) {
        if(v.size()<n)
        {
            v.push_back(x);
        }
    }
    
    int pop() {
        if(v.size()==0)
            return -1;
            int left = v.back();
            v.pop_back();
            return left;
    }
    
    void increment(int k, int val) {
        int x=k;
        if(v.size()<k)
            x=v.size();
        for(int i=0;i<x;i++)
        {
            v[i]+=val;
        }
     
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */