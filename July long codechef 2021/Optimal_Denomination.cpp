#include <bits/stdc++.h>
#define int long long
#define it int
using namespace std;
const int x=1e6;
int arr[x],f[x],b[x];

void solve(int n)
{
    f[1]=arr[1];
    b[n]=arr[n];
    for(int i=n-1;i>0;i--)
     {
       b[i]=__gcd(b[i+1],arr[i]);
      }
    for(int i=2;i<n+1;i++)
     {
       f[i]=__gcd(f[i-1],arr[i]);
      }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum=0;
        int ans=0;
        for(int i=1;i<n+1;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n+1);
        solve(n);
        for(int i=1;i<n+1;i++)
        {
            sum+=arr[i];
        }
        int mx;
        for(int i=1;i<n+1;i++)
        {
            ans=(sum-arr[i]+__gcd(f[i-1],b[i+1]))/__gcd(f[i-1],b[i+1]);
            if(ans<mx)
            mx=ans;
        }
        cout<<mx<<"\n";
    }
    return 0;
}