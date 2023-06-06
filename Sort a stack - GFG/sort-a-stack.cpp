//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void insert(stack<int> &s,int temp)
{
    if(s.empty() || temp>=s.top())
    {
        s.push(temp);
        return;
    }
    
    
    int top=s.top();
    s.pop();
    insert(s,temp);
    s.push(top);
}

void helper_sort(stack<int> &s)
{
    if(s.empty()|| s.size()==1)
    return;
    
    int temp=s.top();
    s.pop();
    
    helper_sort(s);
    insert(s,temp);//the remaining stack is going to get sorted with the help of recursive call
    //and the role of insert is to insert the topmost element at the right position
    
    }
void SortedStack :: sort()
{
   //Your code here
    helper_sort(s);
   
}