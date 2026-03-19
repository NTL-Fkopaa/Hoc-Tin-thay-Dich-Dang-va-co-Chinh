#include <bits/stdc++.h>
using namespace std;
int n,kq, a[100000];
int main(){
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>2*a[j]){
                kq++;
            }
        }
}
    cout<<k<<endl;
}
