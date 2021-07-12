#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    int t;
    cin>>t;
    while(t--){
        ll d,x,y,z;
        cin>>d>>x>>y>>z;
        cout<<max((x*7),(y*d)+(7-d)*z)<<"\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}