#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
#include <cctype>
#include <cstring>
#include <string>
#define ll long long
#define PB push_back
#define Maxn 100010
using namespace std;
int N , a[Maxn];
int main(){
    scanf("%d",&N);
    for (int i=1;i<=N;i++)
        scanf("%d",&a[i]);
    sort(a+1,a+N+1);
    int pre = -100 ,ans = 0;
    for (int i=1;i<=N;i++){
        if (a[i] <= pre + 4) continue;
        ans ++;
        pre = a[i];
    }
    cout << ans << endl;
}