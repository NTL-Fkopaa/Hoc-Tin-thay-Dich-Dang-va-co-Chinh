#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a,b;
    cin>>a>>b;
    long long result,result1;
    if(a%5==0 or b%5==0){
        result=a+b;
        result1=a+b+1;
        cout<<result<<" "<<result1<<endl;
    }
    else{
        result=a+b;
        cout<<result<<endl;
    }
    return 0;
}
