class Solution {
public:
    string reorganizeString(string s) {
        
        map<char,int>mpp;
        
        for(int i=0;i<s.size();i++)
        {
            mpp[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        
        for(auto it:mpp)
        {
            pq.push(make_pair(it.second,it.first)); // max heap ready
            
        }
        string ans="";
        while(pq.size() > 1)
        {
          auto  t1 = pq.top();
            pq.pop();
            
            auto t2 =  pq.top();
            
             pq.pop();
            
            ans+=t1.second;
            
            ans+=t2.second;
            
            t1.first--;
            
            t2.first--;
            
            if(t1.first > 0) pq.push(t1);
            
            if(t2.first > 0) pq.push(t2); 
            
        }
        if(!pq.empty())
        {
          if(pq.top().first > 1)
           {
            return "";
           }
           else
           {
            ans+=pq.top().second;
              }
        }
         return ans;
        
    }
};