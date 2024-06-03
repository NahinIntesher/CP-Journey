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
  cout << endl;
#define fast_io                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)
using namespace std;

void solve(){
    int N, M;
    string S;
    cin >> N >> M >> S;
    vector<int> countChar(7, 0);
    for (int i = 0; i < N; i++){
        countChar[S[i] - 65]++;
    }
    int sum = 0;
    for (int i = 0; i < 7; i++){
        if(countChar[i] < M) 
          sum += abs(M - countChar[i]);
    }
    cout << sum << nl;   
}
int main(){
    fast_io;
    int t = 1;
    cin >> t;
    while(t--){
      solve();
    }
}
