#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[8];
    for (int i(0);i<8;i++)
        cin >>a[i];
    int ans=0;
    for (int i(0);i<8;i++){
        int sum=0;
        for (int j(0);j<4;j++){
            sum+=a[(i+j)%8];
        }
        if (sum > ans) ans=sum;
    }
    cout<<ans<<endl;

}
