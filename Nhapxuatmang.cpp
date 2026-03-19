#include <bits/stdc++.h>
using namespace std;
long a[100000]; long n;
int main(){
    cin>>n;
    for(long i(0); i<n;i++){
        cin>>a[i];
    }
    for(long i(n-1);i>=0;i--){
        cout<<a[i]<<" ";
    }
}
