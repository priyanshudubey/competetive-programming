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
        unordered_map<string, int> m;
        ll n;
        cin>>n;
        for(int i=0;i<n*3;i++){
            string s;
            int t;
            cin>>s>>t;
            if(m.find(s) != m.end())
                m[s]+=t;
            else    
                m.insert({s,t});
        }
        
        vector<int> v;
        for (auto i: m){
            v.push_back(i.second);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();++i)
            cout<<v[i]<<" ";
        cout<<"\n";
    }
    return 0;
}