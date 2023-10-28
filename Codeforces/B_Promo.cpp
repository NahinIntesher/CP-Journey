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
#define yes cout << "YES "<< endl
#define no cout << "NO" << endl
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef vector<int> vi;
typedef long long int ll;
typedef unsigned long long int ull;

void solve(); 
int main(){
    fast_io;
    int t = 1;
    // cin >> t;
    while(t--) solve();
}

void solve(){
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    for(auto &a: A){
        cin >> a;
    }
    sort(A.rbegin(), A.rend());    
    vector<ll> prefixArr(N);
    prefixArr[0] = A[0];
    for (int i = 1; i < N; i++){
        prefixArr[i] = prefixArr[i - 1] + A[i];
    }
    // printVec(A);
    // printVec(prefixArr);

    while (Q--){
        ll X, Y;
        cin >> X >> Y;
        
        if(X == Y) cout << prefixArr[X - 1] << endl;    
        else cout << prefixArr[X - 1] - prefixArr[(X - 1) - Y] << endl; 
    }
    
}