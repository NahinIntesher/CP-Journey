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
#define MAX(v) *max_element(v.begin(), v.end());
#define cinVec(v) for(auto &a: v) cin >> a;
#define printVec(v) for (int i = 0; i < v.size(); i++) cout<<v[i]<< " ";cout<<endl
#define printVecVec(V) for(int i=0;i<V.size();i++){for(int j=0;j<V[i].size();j++)cout<<V[i][j]<< " ";cout<<endl;}
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef vector<int> vi;
typedef long long int ll;
typedef unsigned long long int ull;

void solve(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(auto &a: A){    
        cin >> a;
    }
    sort(all(A));
    
    vector<int> answer(N);
    int ind = 0;
    for(int i = 1; i < N; i += 2)
        answer[i] = A[ind++];
    
    for(int i = 0; i < N; i += 2)
        answer[i] = A[ind++];
    
    
    int totalIce = 0;
    for (int i = 1; i < N - 1; i++)
        totalIce += answer[i] < answer[i - 1] && answer[i] < answer[i + 1];

    if(N < 3) totalIce = 0;
    cout << totalIce << nl;
    printVec(answer);

}

int main(){
    fast_io;
    int t = 1;
    // cin >> t;
    while(t--) solve();
}