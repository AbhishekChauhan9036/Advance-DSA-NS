#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    long long minCost(long long arr[], long long n) {
        long long cost = 0;
        priority_queue<long long,vector<long long>,greater<long long>> minh;
        for(int i =0; i<n; i++)
        {
            minh.push(arr[i]);
        }
        while(minh.size() >= 2)
        {
            long long first = minh.top();
            minh.pop();
            long long second = minh.top();
            minh.pop();
            cost = cost + first + second;
            minh.push(first+second);
        }
        return cost;
    }
};


int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}