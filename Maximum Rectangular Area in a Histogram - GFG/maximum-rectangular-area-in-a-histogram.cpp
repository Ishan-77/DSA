//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        long long maxans = 0;
        vector<long long >left(n,0);
        vector<long long >right(n,0);
        
        stack<long long>st;
        
        //left
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                left[i] = 0;
                //st.push(i);
            }
            else if(arr[i] <= arr[st.top()])
            {
                while(!st.empty() && arr[i]<=arr[st.top()])
                {
                    st.pop();
                }
                if(st.empty()) left[i] = 0;
                else left[i] = st.top()+1;
            }
            else
            {
                left[i]  = st.top()+1;
            }
            st.push(i);
            
        }
        
        // empty stack 
        while(!st.empty()) st.pop();
        
        // right
        for(int j=n-1;j>=0;j--)
        {
          if(st.empty())
          {
              right[j] = n-1;
              //st.push(j);
          }
          else if(arr[j]<= arr[st.top()] )
          {
              while(!st.empty() && arr[j]<=arr[st.top()])
              {
                  st.pop();
              }
              if(st.empty()) right[j] = n-1;
              else right[j] = st.top()-1;
          }
          else
          {
              right[j]  = st.top()-1;
          }
          st.push(j);
        }
        for(int k=0;k<n;k++)
        {
            if(((right[k] - left[k]+1)* arr[k])> maxans)
            {
                maxans  = ((right[k] - left[k]+1)* arr[k]);
            }
        }
        return maxans;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends