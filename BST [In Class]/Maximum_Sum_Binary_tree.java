#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
#define int long long
int32_t main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            sum+=arr[i];
        }
    }


    cout<<sum;
}