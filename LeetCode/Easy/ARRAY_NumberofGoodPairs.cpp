#include <bits/stdc++.h>
using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    int n = nums.size();
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(nums[i] == nums[j]){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<int> nums = {1,2,3,1,1,3};
    cout<<numIdenticalPairs(nums);
}