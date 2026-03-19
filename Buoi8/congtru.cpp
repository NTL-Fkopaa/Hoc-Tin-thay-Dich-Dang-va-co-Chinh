#include <iostream>
using namespace std;

int main() {
    int a,b,c,cnt;
    cin>>a>>b;
    c=abs(a-b);
    if (c%10==0){
        cnt=c/10;
        cout<<cnt<<endl;
    }
    else{
        cnt=c/10+1;
        cout<<cnt<<endl;
    }

    return 0;
}
