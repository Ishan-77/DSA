class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        //double ans = 0;
        double sum=0;
        long long mini = *min_element(salary.begin(),salary.end());
        long long  maxi =  *max_element(salary.begin(),salary.end());
        for(int i=0;i<salary.size();i++)
        {
           sum+=salary[i];   // all sum generated
        }
        return (sum-(mini+maxi))/(n-2);
    }
};