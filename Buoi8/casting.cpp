#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,n,y,result;
    cin>>y>>n>>a>>b>>c;
    int temp=(a + b + c)- 2*n;
    if (y==2){
        result=min({a,b,c});
        cout<<result<<endl;
    }
    else if (y==1){
        result=max(temp,0);
        cout<<result<<endl;
        }

 return 0;
}
