class Solution { 

public: 

    int maxProfit(int k, vector<int>& prices) { 

        int n=prices.size(); 

        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(k+1,0))); 

        //base cases  

        for(int i=0;i<=n;i++) 

        { 

            for(int j=0;j<=1;j++) 

            { 

                dp[i][j][0]=0; 

            } 

        } 

        for(int j=0;j<=1;j++) 

        { 

            for(int cap=0;cap<=k;cap++) 

            { 

                dp[n][j][cap]=0; 

            } 

        } 

        for(int index=n-1;index>=0;index--) 

        { 

            for(int buy=0;buy<=1;buy++) 

            { 

                for(int cap=1;cap<=k;cap++) 

                { 

                     if(buy) 

                      { 

                         int buy_yes=-prices[index]+dp[index+1][0][cap]; 

                          int buy_not=0+dp[index+1][1][cap]; 

                         dp[index][buy][cap]=max(buy_yes,buy_not); 

                       } 

                      else 

                    {                                                          

                     int sell_yes=prices[index]+dp[index+1][1][cap-1]; 

                     int sell_not=0+dp[index+1][0][cap]; 

                     dp[index][buy][cap]=max(sell_yes,sell_not); 

                    } 

                  

                } 

            } 

        } 

      return dp[0][1][k];     

         

    } 

}; 

 