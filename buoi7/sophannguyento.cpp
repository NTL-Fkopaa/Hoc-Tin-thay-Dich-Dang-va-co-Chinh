#include <bits/stdc++.h>
using namespace std;
bool p(long long n){

    if(n<2) return false;
	for(int i=2;i*i<=n;i++)
	if(n%i==0) return false;
	return true;

}

bool check(int n){
    while (n>0){
        if(p(n)) return false;
        n/=10;
    }
    return true;
}
int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    cout<<check(a)<<endl;
    cout<<check(b)<<endl;
    cout<<check(c)<<endl;
}


