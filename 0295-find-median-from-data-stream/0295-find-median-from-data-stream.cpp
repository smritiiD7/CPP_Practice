#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
class MedianFinder {
public:
    /** initialize your data structure here. */
    int n=0;
    ordered_set s;
    MedianFinder() {
    }
    
    void addNum(int num) {
        s.insert(num);
        n++;
    }
    
    double findMedian() {
        double ans = 0.0;
        if(n%2==0){
            ans = ((double)(*(s.find_by_order(n/2))+(*(s.find_by_order(n/2-1)))))/2.0;
        }else{
            ans = (*(s.find_by_order(n/2)))*1.0;
        }
        return ans;
    }
};


/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */