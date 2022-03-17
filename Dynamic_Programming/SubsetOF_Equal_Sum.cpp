#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
   int dp[101][10001];
   bool helper(int N,int arr[],int sum)
   {
           
       if(sum==0)
           return true;
       
       if(N==0)
           return false;
       
       if(dp[N][sum]!=-1)
           return dp[N][sum];
       
       if(arr[N-1]<=sum)
           return dp[N][sum]=helper(N-1,arr,sum-arr[N-1]) || helper(N-1,arr,sum);
       
       else if(arr[N-1]>sum)
           return dp[N][sum]=helper(N-1,arr,sum);
       
       
   }
   bool isSubsetSum(int N,int arr[],int sum)
   {
       memset(dp,-1,sizeof(dp));
       return helper(N,arr,sum);
   }
   int equalPartition(int N, int arr[])
   {
      long long int sum(0);
       sum=accumulate(arr,arr+N,sum);
       
       if(sum%2!=0)
           return false;
       
       else if(sum%2==0)
           return isSubsetSum(N,arr,sum/2);
   }
};


int main(){
    int t=1;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}