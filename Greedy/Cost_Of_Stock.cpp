#include <bits/stdc++.h>
using namespace std;

void stockBuySell(int *, int);
int main() {
    int T;
    T=1;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        stockBuySell(price, n);
    }
    return 0;
}
void stockBuySell(int price[], int n) {
   int j=0;
   bool profit=true;
   bool flag=false;
   for(int i=0;i<n;i++){
       if((price[i]<price[i+1]) && (profit==true )){
           j=i;
           profit=false; 
       }
       if((price[i]>price[i+1]) && (profit!=true)){ 
           cout<<j<<" "<<i<<endl;
           profit=true; 
           flag=true;
       }
   }
    if((profit==false) && price[j]<price[n-1]){
       cout<<j<<" "<<n-1<<endl;
       flag=true;
   }
   if(flag==false ){
       cout<<"null";
   }
  
   cout<<endl;
}