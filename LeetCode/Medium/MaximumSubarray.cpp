#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int maxSum = INT_MIN;
        int currentSum = 0;
        for(int i = 0; i < arr.size(); i++){
            currentSum += arr[i];
            if(currentSum > maxSum){
                maxSum = currentSum;
            } 
            if(currentSum < 0){
                currentSum = 0;
            } 
        }
        return maxSum;
    }
};

int main(){
    vector<int> arr = {-5, -4, 5, -1};
    Solution s;
    cout << s.maxSubArray(arr);
}