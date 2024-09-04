class Solution {
public:
    int getLucky(string s, int k) {
        int res = 0;
        
        // Convert the string to the initial integer
        for (auto& ch : s) {
            int num = ch - 'a' + 1;
            if (num >= 10) {
                res += num % 10 + num / 10;
            } else {
                res += num;
            }
        }
        
        // Perform the transformations
        while (k > 1) {
            int sum = 0;
            while (res > 0) {
                sum += res % 10;
                res /= 10;
            }
            res = sum;
            k--;
        }
        
        return res;
    }
};