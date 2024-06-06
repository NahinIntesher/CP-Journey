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
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl "\n"
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

void solve() {
    int N;
    cin >> N;
    map<int, int> mp;
    vector<int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
        mp[A[i]]++;
    }

    if(mp.size() == 1) {
        yes;
    }    
    else if(mp.size() >= 3) {
        no;
    }
    else {
        vector<int> temp;
        for (auto e: mp) {
            temp.push_back(e.second);
        }
        
        if(abs(temp[0] - temp[1]) <= 1) {
            yes;
        } 
        else {
            no;
        }
    }

}