#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, d;
    cin>>a>>b>>c>>d;
    long long AB = a*b/__gcd(a,b);
    long long CD = c*d/__gcd(c,d);
    long long m =AB*CD/__gcd(AB,CD);
    cout << abs(m);

    return 0;
}

