class Solution {
public:
    string longestPalindrome(string s) 
    {  
    int n=s.length();
     if(n<=1)
     return s;
     int max_length=1;
     int l,h;
     int st=0;

 for(int i=0;i<n-1;i++)
     {    
         l=i;
         h=i;
         while( l>=0 && h<n && s[l]==s[h]  )
         {
             l--;
             h++;
         }
      
         int length=h-l-1;
         if(length>=max_length)
         {
             st=l+1;
             max_length=length;
         }
         
     }
        
        for(int i=0;i<n-1;i++)
     {    
         l=i;
         h=i+1;
         while(l>=0 && h<n && s[l]==s[h])
         {
             l--;
             h++;
         }
         int length=h-l-1;
         if(length>=max_length)
         {
             st=l+1;
            max_length=length;
         }
            
             }//end of for
    
     
     

     return s.substr(st,max_length);


    }
};

