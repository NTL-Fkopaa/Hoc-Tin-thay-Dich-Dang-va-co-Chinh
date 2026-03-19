///TH1: am*am ra kq
///TH2: duong*duong ra kq
#include <iostream>
#include <algorithm>
using namespace std;
long a[100000];long n,TH1,TH2;
int main(){
    cin>>n;
    for(long i(0); i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    TH1=(long)a[n-1]*a[n-2];
    TH2=(long)a[0]*a[1];
    if (TH1>TH2)
        cout<<TH1<<endl;
    else
        cout<<TH2<<endl;
}

