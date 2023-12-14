#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int start = 1;
        int end = x;
        int mid;
        if(x == 0){
            return 0;
        }
        else if(x == 1){
            return 1;
        }
        else{
            while(start <= end){
                mid = start + (end - start)/2;
                if(mid  == x / mid){
                    return mid;
                }
                else if(mid > x / mid){
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }
        }
        return end;
    }
};

int main(){
    int N;
    cin >> N;
    Solution s;
    cout << s.mySqrt(N);
}