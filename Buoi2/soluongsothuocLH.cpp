#include <bits/stdc++.h>
using namespace std;
int dem=0;
int a[1000000];
int main(){
    int n,l,h;
    cin>>n>>l>>h;
    for (int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=l && a[i]<=h){
            dem++;
        }
    }
    cout<<dem;
}
