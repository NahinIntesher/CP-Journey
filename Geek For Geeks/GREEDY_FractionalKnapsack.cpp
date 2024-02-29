#include <bits/stdc++.h>
using namespace std;
struct Item{
    int value;
    int weight;
};
class Solution{
    public:
    static bool comp(Item a, Item b){
        return 1.0*a.value/a.weight > 1.0*b.value/b.weight;
    }
    double fractionalKnapsack(int w, Item arr[], int n){
        sort(arr, arr+n, comp);
        double profit = 0;
        double W = w;
        for(int i = 0; i < n; i++){
            if(W <= 0) break;
            
            double value = arr[i].value;
            double weight = arr[i].weight;
            
            double fraction = 1.0 < W/weight ? 1.0 : W/weight;
            W -= fraction * weight;
            profit += fraction * value;
            
        }
        return profit;
    }
};
int main(){
	cout << setprecision(6) << fixed;
	int n, W;
	cin >> n >> W;
	Item arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i].value >> arr[i].weight;
	}
	Solution ob;
    cout << ob.fractionalKnapsack(W, arr, n) << endl;
}