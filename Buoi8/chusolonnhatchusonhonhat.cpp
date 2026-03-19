#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    int csmin = 9;
    int csmax = 0;
    if (n == 0) {
        csmin = 0;
        csmax = 0;
    } else {
        while (n > 0) {
            int d = n % 10;
            csmin = min(csmin, d);
            csmax = max(csmax, d);
            n = n / 10;
        }
    }
    cout << csmin << " " << csmax << endl;
 return 0;
}

