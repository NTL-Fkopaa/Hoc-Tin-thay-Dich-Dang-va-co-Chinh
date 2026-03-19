#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,d=0;
    cin>>x>>y;
    for(int i=sqrt(x);i<=sqrt(y);i++){
        if (i*i>=x and i*i<=y)
            d++;
}
    cout<<d<<endl;
}

