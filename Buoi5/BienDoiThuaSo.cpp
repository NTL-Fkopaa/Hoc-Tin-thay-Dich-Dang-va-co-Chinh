#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    long long a=0;
    cin>>n;
    while(n>0){
        if (n%2==1){
            n-=1;
            a++;
        }
        else {
            n /=2;
            a++;
        }
    }
    cout<<a;
    return 0;
}
