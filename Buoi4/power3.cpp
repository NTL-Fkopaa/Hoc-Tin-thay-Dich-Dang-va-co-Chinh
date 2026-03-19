#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long tmp=round(cbrt((long double)n));
        cout<<(tmp*tmp*tmp==n ? "YES": "NO")<<endl;
    }

}
