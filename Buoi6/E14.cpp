#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long m = n;
    while (n >= 10) {
	n = n / 10;
    }

    cout << n + (m % 10);


    return 0;
}

