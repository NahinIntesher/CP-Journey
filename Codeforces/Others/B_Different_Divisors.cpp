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

const int N = 2e5 + 3;
vector<bool> isPrime(N , 0);
vector<int> primes;

void findPrimes(){
    for (int i = 2; i < N; i++) {
        if(!isPrime[i]){
            primes.push_back(i);
            for (int j = i * i; j < N ; j += i){
                isPrime[j] = true;
            }
        }
    }
}

void solve(){
    int d;
    cin >> d;
    int x, y;
    for (int i = 0; i < primes.size(); i++){
        if(primes[i] >= (1 + d)){
            x = primes[i];
            break;
        }
    }
    for (int i = 0; i < primes.size(); i++){
        if(primes[i] >= (x + d)){
            y = primes[i];
            break;
        }
    }
    cout << x * y << nl;
}

int main(){
    fast_io;
    int t = 1;
    cin >> t;
    findPrimes();
    while(t--) solve();
}