#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long minCost(long long arr[], long long n) {
        // Create a min heap
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for(long long i = 0; i < n; i++){
            pq.push(arr[i]);
        }
        
        long long cost = 0;
        while(pq.size() > 1){
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();
            
            long long sum = a + b;
            cost += sum;
            pq.push(sum);
        }
        return cost;
    }
};

int main() {
    long long n = 4;
    long long i, arr[] = {4, 3, 2, 6};
    Solution ob;
    cout << ob.minCost(arr, n) << endl;

}