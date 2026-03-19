#include <bits/stdc++.h>
using namespace std;
long n,k;long res;long dem[1000005];long a;
int main(){
    cin>>n>>k;
    for(long long i(1);i<=n;i++){
        cin>>a;
        if(a<=k){
            res+=dem[k-a];
            dem[a]++;
        }
    }
    cout<<res<<endl;
}
