#include <bits/stdc++.h>
using namespace std;
int a[100000];

int main(){
   int n,dem=1,ans=0;
    cin>>n;

   for(int i(1); i<=n;i++){
        cin>>a[i];
   }

   sort(a+1,a+n+1);

   for (int i=1; i <= n; i++)
        if(a[i]!=a[i+1]){
            ans+=(dem*(dem-1)/2);
            dem=1;
        }
        else
            dem++;
    cout<<ans;
}


