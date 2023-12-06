class Solution {
public:
    int totalMoney(int n) {
        int monday = 1;
        
        int ans = 0;
        
        while(n>0) {
            int money = monday;
            
            for(int i=1;i<=min(n,7);i++) {
                ans+=money;
                money++;
            }
            n =  n-7;
            monday++;
        }
        return ans;
        
    }
};