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

void solve(); 
int main(){
    fast_io;
    int t = 1;
    // cin >> t;
    while(t--) solve();
}

void solve(){
    vector<int> A = {10, 20, 50, 70, 130, 150, 150, 150, 170, 270, 350, 490};
    vector<int> C = {150, 170, 270, 150, 350};

    printVec(A);

    A.insert(A.end(), C.begin(), C.end());
    A.insert(A.begin(), 3, 2300);

    printVec(A);
    
    A.erase(A.begin(), A.begin()+3);
    A.erase(A.begin());

    printVec(A);

    bool res = binary_search(A.begin(), A.end(), 130);
    cout << "130 is here? : " << res << nl;
    cout << A.empty();

    cout << "Lower Bound of 150: " << lower_bound(A.begin(), A.end(), 150) - A.begin() << nl;
    cout << "Lower Bound of 180: " << lower_bound(A.begin(), A.end(), 180) - A.begin() << nl;
    cout << "Lower Bound of 350: " << lower_bound(A.begin(), A.end(), 350) - A.begin() << nl;

    cout << "Upper Bound of 150: " << upper_bound(A.begin(), A.end(), 150) - A.begin() << nl;
    cout << "Upper Bound of 180: " << upper_bound(A.begin(), A.end(), 180) - A.begin() << nl;
    cout << "Upper Bound of 350: " << upper_bound(A.begin(), A.end(), 350) - A.begin() << nl;

    int x = 4800;

    int index = lower_bound(A.begin(), A.end(), x) - A.begin();
    if(index != A.size() && A[index] == x){
        cout << "-> Present\n";
    }
    else{
        cout << "-> Not Present\n";
    }

    int maxi = *max_element(A.begin(), A.end());
    int maxi = *max_element(all(A));
    int maxi = MAX(A);
    cout << "Max Element of the array: " << maxi;



}