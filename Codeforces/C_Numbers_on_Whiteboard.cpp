#include <bits/stdc++.h>
#define pb push_back
#define ppb pop_back
#define pii pair<int,int>
#define pll pair<long long,long long>
#define mkp(a,b) make_pair(a,b)
#define all(v) v.begin(), v.end()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/gcd(a,b))*b
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define PI 3.141592653589793238462
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl "\n"
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
typedef vector<int> vi;
typedef long long int ll;
typedef unsigned long long int ull;

void solve(){
    int N;
    cin >> N;
    stack<int> st;
    for (int i = 1; i <= N; i++)
        st.push(i);
        
    cout << 2 << nl;
    while (!st.empty()){
        int pivot1 = st.top(); st.pop();
        int pivot2 = st.top(); st.pop();
        cout << pivot1 << " " << pivot2 << nl;
        if(st.empty())
            break;

        int pivotToPush = ceil(((float)pivot1 + pivot2) / 2);
        st.push(pivotToPush);

    }
      
}

int main(){
    fast_io;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
