/* Author:  Nahin Intesher */
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define pii pair<int, int>
#define all(A) A.begin(), A.end()
#define revall(A) A.rbegin(), A.rend()
#define sortall(A) sort(all(A))
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b)) * b
#define MOD 1000000007
#define MOD1 998244353
#define MAXX INT_MAX
#define MINN INT_MIN
#define INF 1e18
#define PI 3.141592653589793238462
#define nl "\n"
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define MAX(A) *max_element(A.begin(), A.end());
#define MIN(A) *min_element(A.begin(), A.end());
#define cinVec(A) for (auto &a : A) cin >> a;
#define printVec(A) for (auto &a : A) cout << a << " "; cout << endl
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

void solve();
int main(){
    fast_io;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}

void solve(){
    int N;
    cin >> N;
    vector<int> secondSmall;
    int smallest = INT_MAX;
    for (int i = 0; i < N; i++){
        int M;
        cin >> M;
        vector<int> A(M);
        for(auto &a: A) cin >> a;

        int mini1 = MIN(A);
        A.erase(min_element(all(A)));
        int mini2 = MIN(A);        

        smallest = min(smallest, mini1);
        secondSmall.pb(mini2);
    }
    ll ans = smallest + accumulate(all(secondSmall), 0LL) - MIN(secondSmall);

    cout << ans << nl;
}