#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 1e9 + 7;

ll powerfn(ll bs, ll pw){
    ll res=1;
    while(pw!=0){
        if(pw%2==0){
            bs=((bs%mod)*(bs%mod))%mod;
            pw=floor(pw/2);
        }
        else{
            res=((res%mod)*(bs%mod))%mod;
            pw-=1;
        }
    }
    return res;
}

ll solve(ll num){
    ll chefnum=num;
    ll retnum=0;
    if(num<10){
        retnum=chefnum;
    }
    else if(num>=10){
        num=num/10;
        while(num!=0){
            chefnum=chefnum*10+num%10;
            num=num/10;
        }
        retnum=chefnum;
    }
    return retnum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll arr[100001]={0};
    ll prearr[100001]={0};
    for(int i=1;i<=100001;i++){
        arr[i]=solve(i);
        prearr[i]=prearr[i-1]+arr[i];
    }
    ll t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        ll diff=prearr[r]-prearr[l];
        cout<<powerfn(arr[l],diff)<<"\n";
    }
    return 0;
}