class Solution {
public:
    int countPrimes(int n) {
        
        // using sieve algo 
        
        vector<bool>prime(n+1,true);
        
        int count = 0;
        
        prime[0] = prime[1] =  false; // not prime 
        
        
        for(int i=2;i<n;i++) {
            if(prime[i]) {
                count++;
                
                for(int j  = 2*i;j<n;j+=i) {
                    prime[j] = false;
                }
            }
        }
        return count;
        
    }
};