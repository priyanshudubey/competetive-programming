#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n, a, b, ans=0;
        cin>>n>>a>>b;
        ans = 2*(180+n)-(a+b);
        cout<<ans<<endl;
    }
    return 0;
}