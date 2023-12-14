#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> v;
    set<vector<int>> s;
    for (int i = 0; i < nums.size()-2; i++){
        int j = i + 1;
        int k = nums.size()-1;
        while(j < k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum == 0){
                s.insert({nums[i], nums[j], nums[k]});
                j++;
                k--;
            }
            else if(sum < 0){
                j++;
            }
            else if(sum > 0){
                k--;
            }
        }
    }
    for(auto &a: s){
        v.push_back(a);
    }
    return v;
}