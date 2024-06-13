#include <bits/stdc++.h>
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
#define cinVec(A)     \
  for (auto &a : A) \
    cin >> a;
#define printVec(A)                    \
  for (int i = 0; i < A.size(); i++) \
    cout << A[i] << " ";           \
  cout << endl
#define printVecVec(A)                        \
  for (int i = 0; i < A.size(); i++){       \
    for (int j = 0; j < A[i].size(); j++) \
      cout << A[i][j] << " ";           \
    cout << endl;                         \
  }
#define fast_io                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)
using namespace std;
using namespace chrono;

void solve(){
    int N;
    cin >> N;
    int p = 1;
    while (p * 2 < N){
       p = p << 1; // p = p * 2
    }
    // cout << p << nl;
    for (int i = p - 1; i>= 0; i--){
        cout << i << " ";
    } 
    cout << p;
    for (int i = p + 1; i < N; i++){
        cout << " " << i;
    } 
    cout << nl;

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
