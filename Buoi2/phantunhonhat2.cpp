#include <bits/stdc++.h>
using namespace std;
int dem=1;
int n, a[100000];
int main(){
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for (int i=1;i<n;i++){
        if(a[i]== a[0]){
            dem++;
        }
        else{
            break;
        }
    }
    cout<<a[0]<<" "<<dem;

}

