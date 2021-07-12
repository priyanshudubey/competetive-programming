#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    int t, ans=0;
    cin>>t;
    ll n,k,sum=0;
    while(t--){
        cin>>n>>k;
        int ans=0;
        ll sum=0;
        int arr[n];
        for (int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr[i] = temp;
            sum+=temp;
        }  
        sort(arr, arr+n);
        for(int i=0;i<n;i++){
            for(int j=0;i<k&&j<n;j++){
                sum-=arr[i]^i;
                if(sum>0)
                    ans++;
            }
        }
        cout<<ans+1<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}