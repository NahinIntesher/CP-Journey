/* Author:  Nahin Intesher */
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define pii pair<int, int>
#define all(A) A.begin(), A.end()
#define revall(A) A.rbegin(), A.rend()
#define sortall(A) sort(all(A))
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b)) * b
#define MOD 1000000007
#define MOD1 998244353
#define MAXX INT_MAX
#define MINN INT_MIN
#define INF 1e18
#define PI 3.141592653589793238462
#define nl "\n"
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define MAX(A) *max_element(A.begin(), A.end());
#define cinVec(A) for (auto &a : A) cin >> a;
#define printVec(A) for (auto &a : A) cout << a << " "; cout << endl
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

void solve();
void func();
int main(){
    fast_io;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}

void solve() {
    long long x, y, k;
    cin >> x >> y >> k;


    if(x % k == 0 && y % k == 0) {
        long long x_moves, y_moves, extra_moves;
        if(x > y){
            x_moves = x / k;
            y_moves = (x - y) / k;
            extra_moves = 0;
            while(y_moves > 0) {
                extra_moves += y_moves;
                y_moves /= k;
            }
        }
        else if(y > x){
            x_moves = y / k;
            y_moves = (y - x) / k;
            extra_moves = 0;
            while(y_moves > 0) {
                extra_moves += y_moves;
                y_moves /= k;
            }
        }
        else{
            x_moves = x / k;
            y_moves = y / k;
            extra_moves = y_moves;
        }
        cout <<  x_moves + extra_moves << endl;
        return;
    }

    long long moves_x = ((x / k) + (x % k)); 
    long long moves_y = ((y / k) + (y % k)); 

    long long moves = moves_x + moves_y;
    if(moves % 2 != 0) {
        moves++;
    }

    cout << moves << endl;
}
