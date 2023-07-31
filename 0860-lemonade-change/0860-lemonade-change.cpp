class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int count_five = 0;
        int count_ten =0;
        int count_twenty = 0;
        
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i] == 5) {
                count_five++;
            }
            else if(bills[i]==10) {
                if(count_five > 0) {
                    count_five--;
                    count_ten++;
                }
                else return false;
            }
            else { // pay 20
                if(count_five > 0 && count_ten > 0) {
                    count_five--;
                    count_ten--;
                }
                else if(count_five >=3) {
                    count_five-=3;
                }
                else {
                    return false;
                }
                
            }
            
        }
        return true;
        
    }
};