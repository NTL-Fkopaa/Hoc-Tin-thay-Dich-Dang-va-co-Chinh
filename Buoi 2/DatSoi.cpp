#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    cin>>N;
    long long answer = (pow(2, N))+1;
    long long result = answer % 10;
    cout << result<<endl;
    return 0;

}
