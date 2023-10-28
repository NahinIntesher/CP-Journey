#include <bits/stdc++.h>
#define pb push_back
#define ppb pop_back
#define pll pair<ll,ll>
#define pii pair<int,int>
#define mkp(a,b) make_pair(a,b)
#define loop(i, n) for (int i = 0; i < int(n); i++)
#define FOR(i, x, n) for (int i = int(x); i <= int(n); i++)
#define all(v) v.begin(), v.end()
#define cinVec(v) for(auto &a: v) cin >> a;
#define printVec(v) for (int i = 0; i < v.size(); i++) cout << v[i] << " "; cout<<endl
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/gcd(a,b))*b
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define PI 3.141592653589793238462
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef vector<int> vi;
typedef long long int ll;
typedef unsigned long long int ull;

void solve(); 
int main() {
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    map<int, int> position;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        int complement = x - arr[i];
        if (position.find(complement) != position.end()) {
            cout << position[complement] + 1 << " " << i + 1 << endl;
            return 0;
        }
        position[arr[i]] = i;
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}