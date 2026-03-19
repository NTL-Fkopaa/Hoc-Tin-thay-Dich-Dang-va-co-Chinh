#include <bits/stdc++.h>
using namespace std;
long a[100000];long n,b,result=0;
int main(){
    cin>>n;
    ///duyệt từ 0 cho đến n
    for(long i(0); i<n;i++){
        cin>>a[i];
    }
    ///đếm số phần tử bằng 10
    for(long i (0);i<n;i++){
        if (a[i]==10){
            result++;
        }

    }
    cout<<result<<endl;
}
