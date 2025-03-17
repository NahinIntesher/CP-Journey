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
#define cinVec(A) for (auto &a : A) cin >> a;
#define printVec(A) for (auto &a : A) cout << a << " "; cout << endl
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

int getMax(int x, int n, int m) {
  int mlimit = min(m, 30), nlimit = min(n, 30);
  while (mlimit--) x = (x + 1) / 2;
  while (nlimit--) x = x / 2;
  return x;
}

int getMin(int x, int n, int m) {
  int mlimit = min(m, 30), nlimit = min(n, 30);
  while (nlimit--) x = x / 2;
  while (mlimit--) x = (x + 1) / 2;
  return x;
}

void solve() {
  int X, N, M;
  cin >> X >> N >> M;
  cout << getMax(X, N, M) << " " << getMin(X, N, M) << nl;
}

int main(){
    fast_io;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}