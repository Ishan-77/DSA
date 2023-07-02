class Solution {
public:
    string addBinary(string a, string b) 
    {
   reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int i=0,j=0;
    int asize=a.length(), bsize=b.length();
     int carry=0;
     string ans="";
     int x,y;
    while(i<asize || j<bsize)
    {   int sum;
        x=0;
        y=0;

        if(i<asize)
        x=a[i]-'0';
        if(j<bsize)
        y=b[j]-'0';
        
        sum=carry+x+y;
        int digit;
        if (sum<2)
        {
          digit=sum;
          carry=0;
        } 
        else if (sum==2)
        {
            digit=0;
            carry=1;
        }
        else if(sum==3)
        {
           digit=1;
           carry=1;
        }
       ans=to_string(digit)+ans;
       i++;
       j++;
    }
    if(carry==1)
    ans=to_string(carry)+ans;
    

    return ans;
    }
};