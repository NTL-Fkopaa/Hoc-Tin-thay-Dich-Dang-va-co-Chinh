#include <iostream>
using namespace std;
int main() {

    long long m, n;
    cin >> m >> n;

    long long thv = 0;

    while (m > 0 && n > 0) {
        if (m > n) {
            swap(m,n);
        }

        thv += n / m;

        n = n % m;
    }

    cout << thv << endl;

    return 0;
}

