#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,y;
    cin>>n>>m;
    y=__gcd(n,m);
    cout<<y<<endl<<n/y<<" "<<m/y;

}
