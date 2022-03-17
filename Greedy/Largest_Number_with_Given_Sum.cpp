#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
   string largestNumber(int n, int sum)
   {
       int j=9;
       string s = "";
       bool flage = true;
       for(int i=0;i<n;i++)
       {
           if(j <= sum)
           {
               sum -=j;
               string str= to_string(j);
               s +=str;
           }
           else if(flage)
           {
               string str= to_string(sum);
               s +=str;
               sum =0;
               flage = false;
           }
           else 
           s +="0";
       }
       if(sum >0)
       return "-1";
       return s;
   }
};

int main()
{

	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends