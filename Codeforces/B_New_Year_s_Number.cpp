#include <bits/stdc++.h>
#define pb push_back
#define ppb pop_back
#define pii pair<int,int>
#define pll pair<long long,long long>
#define mkp(a,b) make_pair(a,b)
#define all(v) v.begin(), v.end()
#define cinVec(v) for(auto &a: v) cin >> a;
#define printVec(v) for (int i = 0; i < v.size(); i++) cout << v[i] << " "; cout<<endl
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
    int t = 1;
    cin >> t;
    while(t--) solve();
}

void solve(){
    float N;
    cin >> N;
    int temp = ceil(N / 2021);

    //cout << N / 2020 << " " << N / 2021 << endl;
    
    if((N/2021) > temp || (N/2020) < temp){
        no;
    }
    else if(N < 2020){
        no;
    }
    else{
        yes;
    }

}