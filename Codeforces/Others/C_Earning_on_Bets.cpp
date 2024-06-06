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
using namespace chrono;

template <typename T>
istream &operator>>(istream &in, vector<T> &a) {
    for (auto &x : a) in >> x;
    return in;
};
template <typename T>
ostream &operator<<(ostream &out, vector<T> &a) {
    for (auto &x : a) out << x << ' ';
    return out;
};
bool find(vector<int> &A, ll k) {
    ll total = 0;
    for (auto a: A){
        total += (k / a + 1);
    }
    if (total < k) 
        return true;
    return false;
}
 
void solve() {
    int N; 
    cin >> N;
    vector<int> A(N);
    cin >> A;
    if (find(A, 1000000000)) {
        for (int i = 0; i < N; i++) {
            cout << (1000000000 / A[i]) + 1 << " ";
        }
        cout << nl;
    } else {
        cout << -1 << nl;
    }
}
int main(){
    // auto start1 = high_resolution_clock::now(); 
    fast_io;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    // auto stop1 = high_resolution_clock::now(); 
    // auto duration = duration_cast<microseconds>(stop1 - start1);
    // cerr << "Run Time : " << ((double)(clock()) / CLOCKS_PER_SEC);
}
