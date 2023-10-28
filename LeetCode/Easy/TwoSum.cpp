#include <bits/stdc++.h>
#define printVec(v) for (int i = 0; i < v.size(); i++) cout << v[i] << " "; cout<<endl
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<int> v;
    int flag = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(nums[i] + nums[j] == target){
                v.push_back(i);
                v.push_back(j);
                flag = 1;
                break;
            }
        }
        if(flag == 1) break;
    }
    return v; 
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> v = twoSum(nums, target);
    printVec(v);
}