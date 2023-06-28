class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int maxans = 0;
        
        stack<int>st;
        vector<int>left(n,0);
        vector<int>right(n,0);
        
        
        // left
        
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                left[i] = 0;
                
            }
            else if(heights[i] <=heights[st.top()])
            {
              while(!st.empty() && heights[i]<=heights[st.top()])
              {
                  st.pop();
                  
              }
              if(st.empty()) left[i] = 0;
              else left[i] = st.top()+1;
              
            }
            else
            {
                left[i] = st.top()+1;
               
            }
            st.push(i);
        }
        while(!st.empty()) st.pop();
        
        for(int j=n-1;j>=0;j--)
        {
            if(st.empty())
            {
                right[j] = n-1;
                
            }
            else if(heights[j] <= heights[st.top()])
            {
                while(!st.empty() && heights[j]<=heights[st.top()])
                {
                    st.pop();
                }
                if(st.empty()) right[j] = n-1;
                else right[j] = st.top()-1;
                
            }
            else
            {
                right[j] =  st.top()-1;
               
            }
            st.push(j);
            
        }
        for(int k = 0;k<n;k++)
        {
            if(((right[k] - left[k]+1) * heights[k]) > maxans)
            {
                maxans = ((right[k] - left[k]+1) * heights[k]); 
            }
        }
        return maxans;
    }
};