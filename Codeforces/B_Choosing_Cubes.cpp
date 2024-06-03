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
#define fast_io                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)
using namespace std;

void solve(){
    int N, F, K;
    cin >> N >> F >> K;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
        
    int favoriteValue = A[F - 1];

    sort(A.rbegin(), A.rend());
    int greaterCount = 0, equalCount = 0;
        
    for (int i = 0; i < N; i++) {
        if (A[i] > favoriteValue)
            greaterCount++;
        else if (A[i] == favoriteValue)
            equalCount++;
    }
        
    if (greaterCount >= K) 
        no;
    else if (greaterCount + equalCount <= K)
        yes;
    else
        cout << "MAYBE" << endl;
   
}
int main(){ 
    fast_io;
    int t = 1;
    cin >> t;
    while(t--){
      solve();
    }
}
