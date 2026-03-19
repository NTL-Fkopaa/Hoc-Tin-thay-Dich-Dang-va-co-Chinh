#include <bits/stdc++.h>
using namespace std;
int n, a[100000];
int main(){
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);
    cout<<abs(a[n-1]-a[n-2]);

}
