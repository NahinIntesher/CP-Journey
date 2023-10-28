#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return start;
    }
};

class Main{
    int main(){
        Solution s;
        vector<int> nums = {1,3,5,6,7,9};
        int target = 8;
        int x = s.searchInsert(nums, target);
        cout << x;
    }
};