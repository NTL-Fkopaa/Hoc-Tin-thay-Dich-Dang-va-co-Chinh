#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 1;
bool is_prime;
int cnt;

void sieve() {
    fill(is_prime, is_prime + N, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < N; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < N; j += i)
                is_prime[j] = false;
        }
    }
    
    cnt[0] = 0;
    for (int i = 1; i < N; i++) {
        cnt[i] = cnt[i - 1] + (is_prime[i] ? 1 : 0);
    }
}

int main() {
    // Tối ưu tốc độ nhập xuất
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Mở file theo yêu cầu đề bài
    if (fopen("CPRIME.INP", "r")) {
        freopen("CPRIME.INP", "r", stdin);
        freopen("CPRIME.OUT", "w", stdout);
    }

    sieve();

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int a, b;
        cin >> a >> b;
        // Đảm bảo a-1 không âm và trả về kết quả trong O(1)
        if (a > b) cout << 0 << "\n";
        else cout << cnt[b] - cnt[a - 1] << "\n";
    }

    return 0;
}
