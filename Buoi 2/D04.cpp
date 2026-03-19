#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if (n%4==0 && n%100!=0 or n%400==0){
        cout<<"YES";
    }
    else
        cout<<"NO";
}
