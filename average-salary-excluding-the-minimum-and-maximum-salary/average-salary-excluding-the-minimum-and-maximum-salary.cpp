class Solution {
public:
    double average(vector<int>& salary) {
        double mini=*min_element(salary.begin(),salary.end());
        double maxi=*max_element(salary.begin(),salary.end());
        double l=salary.size()-2;
        double sum=accumulate(salary.begin(),salary.end(),0)-(maxi+mini);
        double answer=sum/l;
        return answer;
        
    }
};