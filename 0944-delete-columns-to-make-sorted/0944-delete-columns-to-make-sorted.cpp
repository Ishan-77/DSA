class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count=0;
        int row=strs.size();
        int col=strs[0].size();
        for(int i=0;i<col;i++)
        {
            for(int j=1;j<row;j++)
            {
                if(strs[j-1][i]>strs[j][i])
                {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};