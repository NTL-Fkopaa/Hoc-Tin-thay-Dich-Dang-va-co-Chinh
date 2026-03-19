#include <bits/stdc++.h>
using namespace std;
int main(){
    long long m,n,result=1;
    cin>>m>>n;
    for(long long i(m);i<=n;i++){
        if (i%2 != 0){
            result*=i;
        }

    }
    cout<<result<<endl;
}
