#include <iostream>
using namespace std;
int main()
{
    int long long a,b,k,x,y;
    cin >> a>>b>>k>>x>>y;
    int long long tska=a*k;
    int long long tskb=b*k;
    int long long remaina=tska-x;
    int long long remainb=tskb-y;
    int long long sokeoacuati,sokeobcuati,sokeoacuateo,sokeobcuateo;

    if ((remaina%2==0) && (remainb%2==0)){
    sokeoacuateo=remaina/2;
    sokeobcuateo=remainb/2;
    sokeobcuati=sokeobcuateo;
    sokeoacuati=sokeoacuateo;
    }

    else if ((remaina%2!=0) && (remainb%2==0)){
    sokeoacuati=(remaina+1)/2;
    sokeobcuati=remainb/2;
    sokeoacuateo=remaina-sokeoacuati;
    sokeobcuateo=sokeobcuati;
    }

    else if ((remaina%2!=0) && (remainb%2!=0)){
    sokeoacuati=(remaina+1)/2;
    sokeobcuati=(remainb-1)/2;
    sokeoacuateo=(remaina-1)/2;
    sokeobcuateo=(remainb+1)/2;
    }

    else if ((remaina%2==0) && (remainb%2!=0)){
    sokeoacuati=remaina/2;
    sokeobcuati=(remainb+1)/2;
    sokeoacuateo=remaina/2;
    sokeobcuateo=(remainb-1)/2;
    }
    cout<<sokeoacuati<<" "<<sokeobcuati<<endl;

return 0;
}
