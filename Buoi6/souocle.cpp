#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,d=0;
    cin>>n;
    for (long i=1;i*i<= n; i++) {
        if (n%i==0) {
            if(i%2!=0)
                d++;
            if(i!=n/i && (n/i)%2!=0)
                d++;
        }
    }
    cout<<d;
}
