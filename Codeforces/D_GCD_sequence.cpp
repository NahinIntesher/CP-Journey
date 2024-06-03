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

bool isNonDecreasing(vector<int>& B) {
    for (int i = 1; i < B.size(); ++i) {
        if (B[i] < B[i-1])
            return false;
    }
    return true;
}
bool canRemoveToFix(const vector<int>& A) {
    int N = A.size();
    vector<int> B(N - 1);

    for (int i = 0; i < N - 1; ++i) {
        B[i] = gcd(A[i], A[i+1]);
    }
    if (isNonDecreasing(B)) {
        return true;
    }
    for (int i = 0; i < N; ++i) {
        vector<int> temp;
        for (int j = 0; j < N; ++j) {
            if (j != i) 
                temp.push_back(A[j]);
        }        
        vector<int> new_b(temp.size() - 1);
        for (int j = 0; j < temp.size() - 1; ++j) {
            new_b[j] = gcd(temp[j], temp[j+1]);
        }
        if (isNonDecreasing(new_b)) {
            return true;
        }
    }
    return false;
}

void solve(){
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;

    if (canRemoveToFix(A))
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