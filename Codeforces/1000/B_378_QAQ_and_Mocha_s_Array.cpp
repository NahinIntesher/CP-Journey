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
#define fast_io                     \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)
using namespace std;

void solve(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(auto &a: A)
        cin >> a;
    sort(all(A));

    vector<int> B;
    for (int i = 1; i < N; i++){
      if(A[i] % A[0] != 0)
          B.push_back(A[i]);
    }
    for (int i = 1; i < B.size(); i++){
      if(B[i] % B[0] != 0){
          no;
          return;
      }
    }
    yes;

    

}
int main(){
    fast_io;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}