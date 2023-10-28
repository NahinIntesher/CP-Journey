#include <bits/stdc++.h>
#define pb push_back
#define ppb pop_back
#define pll pair<ll,ll>
#define pii pair<int,int>
#define mkp(a,b) make_pair(a,b)
#define loop(i, y) for (int i = 0; i < int(y); i++)
#define FOR(i, x, y) for (int i = int(x); i <= int(y); i++)
#define all(v) v.begin(), v.end()
#define cinVec(v) for(auto &a: v) cin>>a;
#define printVec(v) for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/gcd(a,b))*b
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define PI 3.141592653589793238462
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef vector<int> vi;
typedef long long int ll;
typedef unsigned long long int ull;

void solve(); 
int main(){
    fast_io;
    solve();
}

void solve(){
    int n;
    cin>>n;
    vi v(n);
    cinVec(v);
    int count = 1, count2 = 1;
    for(int i = 1; i < n; i++){
        if(v[i] > v[i-1]){
            count++;
        }
        else{
            if(count>count2){
                count2=count;
            }
            count = 1;
        }
    }

    if(count>count2){
        count2=count;
    }

    cout<<count2;

}