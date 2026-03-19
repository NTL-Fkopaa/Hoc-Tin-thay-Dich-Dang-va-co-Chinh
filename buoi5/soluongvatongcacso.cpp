#include <bits/stdc++.h>
using namespace std;
long a[100000]; long n;long result1=0;long sum=0;
int main(){
    cin>>n;
    for(long i(1); i<=n;i++){
        cin>>a[i];
    }
    for(long i(1); i<=n-1;i++){
        if(a[i]>a[n]){
            result1++;
            sum+=a[i];
        }

}
    cout<<result1<<endl<<sum<<endl;
}
