#include <bits/stdc++.h>
using namespace std;
int n,r=0, a[100000];
int main(){
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n-1;i++){
        if(a[i]<a[i-1] and a[i]<a[i+1]){
            r++;
        }
    }
    cout<<r;
}



