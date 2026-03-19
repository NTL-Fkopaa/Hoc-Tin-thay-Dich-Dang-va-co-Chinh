#include <bits/stdc++.h>
using namespace std;

int s(int n){
    int r=0;
    while(n>0)
    {
        r++;
        n/=10;
    }
    return r;
}

int main(){
    int n;
    cin>>n;
    int m=0,r=0;
    while(m<n)
    {
        r++;
        m+=s(r);
    }
    if (m==n) cout<<r;
    else
        cout<<0;

}


