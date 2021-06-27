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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a+c)==180 || (b+d)==180)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
    