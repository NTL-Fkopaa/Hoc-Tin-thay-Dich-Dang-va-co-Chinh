#include <bits/stdc++.h>
using namespace std;
using ll= long long;

ll h(ll a,ll n, ll m){
  if(n==0) return 1%m;
  ll t=h(a,n/2,m);
  if (n%2==0) return t*t%m;
  else
    return t*t%m*a%m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a,n,m;
    cin>>a>>n>>m;
    cout<<h(a,n,m)<<'\n';
    return 0;
}