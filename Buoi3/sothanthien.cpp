#include <bits/stdc++.h>
using namespace std;
bool a(int n){
    int m=0,n1=n;
    while(n != 0) {
        m=m*10+n%10;
        n/=10;
    }
    return __gcd(m,n1)==1;
}
int main(){
    long long n,result=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if (a(i)){
            result++;
        }
    }
    cout<<result<<endl;
}
