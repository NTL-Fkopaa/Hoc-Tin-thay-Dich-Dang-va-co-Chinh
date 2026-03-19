#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long n, a, b;
    cin >> n >> a >> b;
    int cnt = 0;
    while (n > 0)
    {
        n-=a ;
        a+=b ;
        cnt++;
    }
    cout << cnt << '\n';
}
