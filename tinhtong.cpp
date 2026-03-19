#include <bits/stdc++.h>
using namespace std;
long a[100000]; long n;long sum=0;
int main(){
    cin>>n;
    for(long i(0); i<n;i++){
        cin>>a[i]; sum +=a[i];
    }
        cout<<sum;
}
