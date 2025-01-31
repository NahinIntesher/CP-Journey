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

int maxFibonacciness(int a1, int a2, int a4, int a5) {
    int maxCount = 0;

    for (int a3 = -200; a3 <= 200; ++a3) {
        int count = 0;
        if (a4 == a1 + a3) count++;
        if (a5 == a3 + a4) count++;
        if (a4 == a2 + a3) count++;

        maxCount = max(maxCount, count);
    }

    return maxCount;
}
int main(){
    fast_io;
    int t;
    cin >> t;

    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        cout << maxFibonacciness(a1, a2, a4, a5) << endl;
    }

}