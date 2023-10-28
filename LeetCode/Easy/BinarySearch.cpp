#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& arr, int target) {
        int start = 0;
        int end = arr.size() - 1;
        int mid;
        while(start <= end){
            mid = start + (end - start)/ 2;
            if(target == arr[mid]){
                return mid;
            }
            else if(target < arr[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return -1;
    }
};

int main(){
    vector<int> arr = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    Solution s;
    cout << s.search(arr, target);
}