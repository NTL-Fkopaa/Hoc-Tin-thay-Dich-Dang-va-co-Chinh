#include <bits/stdc++.h>
using namespace std;
int n,r, a[100000];
int main(){
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int maxx=a[n - 1];
    int sec=a[n-2];
    r=maxx-sec;
    cout<<r<<endl;

}




