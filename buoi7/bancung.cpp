#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long s=1;
    while(n--){
        long long x;
        cin>>x;
        s=lcm(x,s);
    }
    cout<<s;
}
