class Solution {
public:
    bool isPalindrome(int x) {
        long long int rev=0;
        int temp=x;
        if(x<0|| x>pow(2,31))
        {
            return false;
        }
        while(temp!=0)
        {
            int ld =temp%10;
            rev=rev*10+ld;
            temp=temp/10;
        }
        return (rev==x);
        
    }
};