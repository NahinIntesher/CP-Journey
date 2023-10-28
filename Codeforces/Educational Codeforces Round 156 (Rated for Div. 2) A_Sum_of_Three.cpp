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
int main(){
    fast_io;
    int t = 1;
    cin >> t;
    while(t--) solve();
}

void solve(){
    int N;
    cin >> N;
    int FLAG = 0;
    for (int i = 1; i < N / 2; i++){
        if(i % 3  == 0) i++;
        int j = i + 1;
        if(j % 3  == 0) j++;
        int k = N;
        if(k % 3  == 0) k--;
        int flag = 0;
        while(j < k){
            ll sum = i + j + k;
            if(sum == N){
                flag = 1;
                cout << "YES" << endl;
                cout << i << " " << j << " " << k << endl;
                break;
            }
            else if(sum < N){
                j++;
                if(j % 3  == 0) j++;
            }
            else if(sum > N){
                k--;
                if(k % 3  == 0) k--;
            }
        }
        if(flag == 1){
            FLAG = 1;
            break;
        }
    }
    if(FLAG == 0){
        cout << "NO" << endl;
    }
}