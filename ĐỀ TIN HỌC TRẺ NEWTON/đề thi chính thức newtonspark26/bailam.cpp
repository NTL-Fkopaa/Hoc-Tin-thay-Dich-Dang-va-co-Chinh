#include <iostream>
#include <cmath>
#include <algorithm>

int n;
using namespace std;
const int MN = 1000005;
long long a[MN];
long long P[MN]; 
long long S[MN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    P[0]=0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        P[i] = P[i - 1] + a[i];
    }

    //tongphansau:
    S[n + 1] = 0;
    for (int i = n; i >= 1; i--) {
        S[i] = S[i + 1] + a[i];
    }
    
    long long ans = -1; 
    long long R=n;
    for (int L = 1; L < n; L++) {
        while (R > L + 1 && abs(P[L] - S[R - 1]) <= abs(P[L] - S[R])) {
            R--;
        }
        
        long long cdiff = abs(P[L] - S[R]);

        if (ans == -1 || cdiff < ans) {
            ans = cdiff;
        }
    }

    cout << ans << endl;

    return 0;
}
