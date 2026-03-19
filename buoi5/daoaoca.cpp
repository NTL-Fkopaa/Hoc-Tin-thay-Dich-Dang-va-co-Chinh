#include <bits/stdc++.h>
using namespace std;
int main(){
    double m,n,r;
    cin>>m>>n>>r;
    double dt1=m*n;
    double dtht=r*r*3.14;
    if(r*2<n and r*2 <m){
        cout<<fixed<<setprecision(2)<<dt1-dtht<<endl;
    }
    else{
        cout<<"Khong dao duoc"<<endl;
    }

}


