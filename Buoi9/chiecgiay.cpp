#include <bits/stdc++.h>
using namespace std;
long long a[2000011];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    long long n,sum=0;
    cin>>n;

    for(int i=1;i<=(2*n)-1;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if (sum>0){
        cout<<-1<<endl;
        cout<<abs(sum);
    }
    else{
        cout<<1<<endl;
        cout<<abs(sum);
    }
}


