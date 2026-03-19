#include <iostream>
using namespace std;
int main()
{
    int long long n,m;
    cin >> n>>m;
    int long long x = n/2 + (m - (n/2 % m));
    cout<<x<<endl;

return 0;
}
