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

bool canPlayAllCards(const vector<vector<int>>& cards, const vector<int>& turnOrder) {
    int n = cards.size();    
    int m = cards[0].size(); 
    
    vector<int> currentPos(n, 0);
    int lastCard = -1;
    
    for (int round = 0; round < m; round++) {
        for (int cowIndex : turnOrder) {
            while (currentPos[cowIndex] < m && 
                   cards[cowIndex][currentPos[cowIndex]] <= lastCard) {
                currentPos[cowIndex]++;
            }       
            if (currentPos[cowIndex] >= m) {
                return false;
            }
            
            lastCard = cards[cowIndex][currentPos[cowIndex]];
            currentPos[cowIndex]++;
        }
    }    
    return true;
}


void solve(){
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> cards(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> cards[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        sort(cards[i].begin(), cards[i].end());
    }
    
    vector<int> turnOrder(n);
    iota(turnOrder.begin(), turnOrder.end(), 0);
    
    if (canPlayAllCards(cards, turnOrder)) {
        for (int i = 0; i < n; i++) {
            cout << turnOrder[i] + 1 << (i < n - 1 ? " " : "\n");
        }
        return;
    }
    
    bool foundSolution = false;
    while (next_permutation(turnOrder.begin(), turnOrder.end())){
        if (canPlayAllCards(cards, turnOrder)) {
            foundSolution = true;
            break;
        }
    } 
    
    if (foundSolution) {
        for (int i = 0; i < n; i++) {
            cout << turnOrder[i] + 1 << (i < n - 1 ? " " : "\n");
        }
    } else {
        cout << "-1\n";
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