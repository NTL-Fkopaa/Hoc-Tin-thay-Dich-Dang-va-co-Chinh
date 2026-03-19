#include <bits/stdc++.h>
using namespace std;
int a[100000];
bool p(int n){
    if(n<2) return false;

    for (int i(2);i*i<=n;i++)
        if(n%i==0)
            return false;
        return true;
    }
int main(){
   int n;
   cin>>n;

   for(int i(0); i<n;i++){
        cin>>a[i];
   }

   for (int i=1;i<=n;++i){
        cin>>a[i];
        if(p(a[i])){
            cout<<a[i];
            return 0;
        }
   }
   cout<<-1
}

