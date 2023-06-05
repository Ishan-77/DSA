class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int l=0;
        int r = 1;
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        int count=0;
        while(r<n)
        {
            if(intervals[l][1]<=intervals[r][0]) // non overlap case
            {
                l = r;
                r++;
            }
            else if(intervals[r][1]>=intervals[l][1])
            {
                count++;
                r++;
            }
            else if(intervals[l][1] > intervals[r][1])
            {
                count++;
                l = r;
                r++;
            }
        }
        return count;
    }
};