#include <bits/stdc++.h>
using namespace std;
const long long N=1e6 +1;
long long n, t[N], result=0;

bool m(long long k){
    long long cnt =0;
    while (k>0){
        cnt += k%10;
        k/=10;
    }
    for (long long i=1;i<=100;i++){
        if (t[i]==cnt)
            return 1;
    }
    return 0;
}

signed main(){
    t[1]=1;t[2]=1;
    for(long long i=3;i<=100;i++){
            t[i]=t[i-1]+t[i-2];
        }
    cin>>n;
    long long r =sqrt(n);
    for (long long i=1; i<=r; i++){
        if (m(i*i))
            result++;
    }
    cout<<result<<endl;
}
