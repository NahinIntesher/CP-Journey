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

bool canTransform(const vector<int>& a, const vector<int>& b, const vector<int>& d) {
    unordered_map<int, int> countB, countD;
    for (int num : b) 
        countB[num]++;
    for (int num : d) 
        countD[num]++;

    for (const auto& pair : countB) {
        if (countD[pair.first] < pair.second) return false;  
    }
    return true;
}
void solve(){
    int N, M;
    cin >> N;
    vector<int> A(N), B(N);
    for (auto &a : A) 
      cin >> a;
    for (auto &b : B) 
      cin >> b;
    
    cin >> M;
    vector<int> D(M);
    for (auto &d : D)
      cin >> d;
    
    if (canTransform(A, B, D))
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
}
int main(){
    fast_io;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}