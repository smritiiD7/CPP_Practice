class ProductOfNumbers {
public:
    vector<long long> v;
    ProductOfNumbers() {
        v= {1};
    }
    
    void add(int num) {
        if(num)
        v.push_back(v.back()*num);   //cumulative product
        else
            v = {1};
    }
    
    int getProduct(int k) {
       if(k<v.size())
           return v.back()/v[v.size()-k-1];return 0;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */