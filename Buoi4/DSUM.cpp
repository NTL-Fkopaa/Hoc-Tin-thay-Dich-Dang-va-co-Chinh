#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int result=0;
    while (n > 0) {
        int sc=n%10;
        result+=sc;
        n /= 10;
    }
    cout<<result<<endl;

    return 0;
}
