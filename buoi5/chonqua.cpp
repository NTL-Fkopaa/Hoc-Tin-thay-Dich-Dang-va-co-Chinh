#include <bits/stdc++.h>
using namespace std;
long a[10000000]; long n;
int main(){
    cin>>n;
   for(long long i(0);i<n;i++){
    cin>>a[i];
   }
   sort(a, a+n, greater<long long>());

   for (long long i(1);i<n;i++){
    if (a[i]!=a[i-1]){
        cout<<a[i]+a[i-1];
        return 0;
    }
   }
   cout<<-1;
}
