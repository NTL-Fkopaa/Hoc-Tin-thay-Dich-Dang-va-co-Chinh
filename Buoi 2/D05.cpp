#include <iostream>
using namespace std;
int main()
 {
     char c;
     cin >> c;
     if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
     cout << "YES" << endl;
     else
    cout << "NO" << endl;

    return 0;
}
