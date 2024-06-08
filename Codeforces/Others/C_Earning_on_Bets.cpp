#include <bits/stdc++.h>
#define ll long long
#define all(v) v.begin(), v.end()
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b)) * b
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define PI 3.141592653589793238462
#define nl "\n"
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define MAX(A) *max_element(A.begin(), A.end());
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
void solve() {
    ll N; 
    cin >> N;
    vector<ll> A(N);
    for(auto &a: A)
        cin >> a;

    ll LCM = A[0];
    for (int i = 1; i < N; i++){
        LCM = lcm(LCM, A[i]);
    }
    
    vector<ll> ans(N);
    ll totalSpent = 0;
    ll minProfit = INT_MAX;
    for (int i = 0; i < N; i++){
        ans[i] = LCM / A[i];
        totalSpent += ans[i];
        minProfit = min(minProfit, ans[i]*A[i]);
    } 

    if(totalSpent < minProfit){    
        for (int i = 0; i < N; i++){
            cout << ans[i] << " ";
        } 
        cout << nl;
    }
    else cout << -1 << nl;
    
}
int main(){
    fast_io;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
