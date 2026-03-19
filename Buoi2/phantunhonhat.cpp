#include <bits/stdc++.h>
using namespace std;
int n, a[100000];
int main(){
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>a[i];
    //tạo biến Min + gắn bẳng phần từ đầu tiên của mảng
    long long Min=a[0],cs=0;
    for(int i=0;i<n;i++)
    if(Min>a[i]){
        Min=a[i];
        cs=i;
    }
    cout<<cs+1;


}

