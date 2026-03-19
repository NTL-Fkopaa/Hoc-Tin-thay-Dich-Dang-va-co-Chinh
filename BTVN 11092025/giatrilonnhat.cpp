#include <bits/stdc++.h>
using namespace std;
long a[100000];long n,b,result=0;
int main(){
    cin>>n;
    ///duyệt từ 0 cho đến n:
    for(long i(0); i<n;i++){
        cin>>a[i];
    }
    ///tìm giá trị lớn nhất trong dãy n:(sắp xếp lại dãy n từ số nhỏ nhất đến số lớn nhất(a=min)
    sort(a,a+n);
    b=a[0];
    ///đếm số phần tử bằng b:
    for(long i (0);i<n;i++){
        if (a[i]==b){
            result++;
        }

    }
    cout<<b<<" "<<result<<endl;;
}
