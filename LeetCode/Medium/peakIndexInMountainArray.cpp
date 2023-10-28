#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;
        int maxIndex;
        int mid;
        while(start < end){
            mid = start + (end - start)/2;
            if(arr[mid] < arr[mid + 1]){
                start = mid + 1;
            }
            else{
                end = mid;
            }
        }
        return start;
    }
};
int main(){
    vector<int> A = {3, 5, 3, 2, 0};
    Solution s;
    int ans = s.peakIndexInMountainArray(A);
    cout << ans;
}