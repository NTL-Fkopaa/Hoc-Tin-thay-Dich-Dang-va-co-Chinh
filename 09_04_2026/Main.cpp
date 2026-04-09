#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 1;
int p[N], d[1000001],l,r;

void h() {
    for (int i = 1; i < N; i++) p[i] = true;
    p[1] = false;
    for (int i = 2; i * i < N; i++) {
        if (p[i]) {
            for (int j = i * i; j < N; j += i) p[j] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    h();
  
    int q; 
    cin >> q;
    
    for(int i(1);i<=1e6;i++){
      if (p[i] and p[(i + 1)/2]) {
        d[i]= 1;}
        
	  else {
	    d[i] = 0;}
    }
    
    while (q--) {
        cin>>l>>r;
        int cnt=0;
        for(int i=l;i<=r;i++) {
            cnt+= d[i];
        }
        cout<<cnt<<'\n';
    }

    return 0;
}
