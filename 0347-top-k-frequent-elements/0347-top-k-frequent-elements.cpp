class Solution { 

public: 

    typedef pair<int, int> pd; 

    struct myComp { 

     bool operator()( pair<int, int> a,pair<int, int>  b) 

    { 

        return a.second < b.second; 

    } 

}; 

    vector<int> topKFrequent(vector<int>& nums, int k)  

    {   

        vector<int> ans; 

        unordered_map<int,int> mpp; 

        for(int i=0;i<nums.size();i++) 

        mpp[nums[i]]++; 

        priority_queue<pd, vector<pd>, myComp> pq; 

        for(auto it:mpp) 

        pq.push(it);//max heap is ready 

        for(int i=0;i<k;i++) 

        { 

            auto it=pq.top(); 

            ans.push_back(it.first); 

            pq.pop(); 

        } 

       

      return ans; 

   } 

}; 