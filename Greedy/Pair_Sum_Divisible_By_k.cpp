#include <bits/stdc++.h>
using namespace std;
#define int long int
class Solution
{
    public:
    int countKdivPairs(int arr[], int n, int k)
    {
        unordered_map<int, int> mp;
        
        int count = 0;
        
        for(int i = 0; i < n; i++)
        {
            int rem = arr[i] % k;
            
            int curr = (k - rem) % k ;
            
            auto it = mp.find(curr);
            
            if(it != mp.end())
            {
                count += mp[curr];
            }
            
            mp[rem]++;
        }
        
        return count;
    }

};
int32_t  main()
{
	int t;
	t=1;
	while (t--)
	{
		int n;
		cin >> n;
				int k;
		cin >> k;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];



        Solution ob;
		cout << ob. countKdivPairs(a, n , k) << "\n";


	}

	return 0;
}