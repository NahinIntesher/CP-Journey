#include <bits/stdc++.h>
#define pb push_back
#define ppb pop_back
#define pii pair<int,int>
#define pll pair<long long,long long>
#define mkp(a,b) make_pair(a,b)
#define all(v) v.begin(), v.end()
#define cinVec(v) for(auto &a: v) cin >> a;
#define printVec(v) for (int i = 0; i < v.size(); i++) cout<<v[i]<< " ";cout<<endl
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/gcd(a,b))*b
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define PI 3.141592653589793238462
#define nl "\n"
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef vector<int> vi;
typedef long long int ll;
typedef unsigned long long int ull;

void solve(); 
int main(){
    fast_io;
    int t = 1;
    cin >> t;
    while(t--) solve();
}

void solve(){
    int N, M;
    cin >> N >> M;
    string S1, S2;
    cin >> S1 >> S2;

    int flag = 0;
    for (int i = 0; i < N - 1; i++){
        if(S1[i] == S1[i + 1]){
            flag = 1;
            break;
        }
    }

    // All elements are same
    if(flag == 0) {
        yes;
        return;
    }

    for (int i = 0; i < M - 1; i++){
        if(S2[i] == S2[i + 1]){
            // Second string is not valid
            no;
            return;
        }
    }
    
    if (S2[0] != S2[M - 1]) {
        no;
        return;
    }

    for (int i = 0; i < N - 1; i++){
        if(S1[i] == S1[i + 1] && S1[i] == S2[0]){
            // Not Possible
            no;
            return;
        }
    }
    yes;

}