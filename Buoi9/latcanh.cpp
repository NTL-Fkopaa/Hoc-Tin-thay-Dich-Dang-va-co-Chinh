#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    long long sgN=(n + a - 1) / a;
    long long sgM=(m + a - 1) / a;
    long long tong=sgN * sgM;
    cout << tong << endl;
    return 0;
}
