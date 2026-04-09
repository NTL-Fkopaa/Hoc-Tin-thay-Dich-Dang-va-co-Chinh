#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 1;
int d[N], L, R, n, cnt[N], k, s[N], m;

void Sieve()
{
    for(int i = 2; i < N; i++) d[i] = i;
    for(int i = 2; i * i < N; i++)
    {
        if(d[i] == i)
            for(int j = i * i; j < N; j += i)
                if (d[j] == j) d[j] = i;
    }
}

void Factor(int x)
{
    while(x > 1)
    {
        int y = d[x];
        cnt[y]++;
        while(x % y == 0) x /= y;
    }
}

int main()
{
    cin >> n;
    Sieve();
    for(int i = 1; i <= n; i++)
    {
        cin >> k;
        Factor(k);
    }
    s[0] = s[1] = 0;
    for(int i = 2; i < N; i++)
        s[i] = s[i - 1] + cnt[i];

    cin >> m;
    while(m--)
    {
        cin >> L >> R;
        if(L > N) cout << 0 << endl;
        else
        {
            if(R > N) R = N - 1;
            cout << s[R] - s[L - 1] << endl;
        }
    }
}