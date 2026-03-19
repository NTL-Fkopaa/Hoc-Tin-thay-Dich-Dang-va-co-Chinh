#include <bits/stdc++.h>
using namespace std;
long a[100000];long n,v,b,result=0;
int main(){
    cin>>n>>v;
    for(long i(0); i<n;i++){
        cin>>a[i];
    }
    for(long i (0);i<n;i++){
        if (a[i]==v){
            result++;
        }

    }
    cout<<result<<endl;
}
