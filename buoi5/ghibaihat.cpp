#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,k;
    cin>>n>>m>>k;
    long long tongsogiay=n*60+m;
    long long sogiaycanthiet=tongsogiay*16;
    long long sodungluongconlaiodiacung=k*1024;

    if (sodungluongconlaiodiacung>=sogiaycanthiet)
        cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
        long long result=sogiaycanthiet-sodungluongconlaiodiacung;
        cout<<result<<endl;
    }
}

