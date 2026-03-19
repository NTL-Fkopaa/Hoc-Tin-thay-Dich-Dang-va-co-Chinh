#include <bits/stdc++.h>
#include <string>
using namespace std;
string c;
string solve(string a) {
    transform(a.begin(), a.end(), a.begin(),::tolower);
    vector<string>b={"you","we","they"};

    if (a=="i")
        return "am";

    else if (find(b.begin(),b.end(),a)!=b.end())
        return "are";

    else
        return "is";

}
int main() {
    string c;
    cin>>c;
    string d = solve(c);
    cout<<d<<endl;
    return 0;
}
