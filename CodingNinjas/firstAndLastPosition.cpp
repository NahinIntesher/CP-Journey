#include <bits/stdc++.h>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k){
    int startForMin = 0, endForMin = n - 1;
    int startForMax = 0, endForMax = n - 1;
    int minIndex, maxIndex;
    int mid;
    int flag = 0;
    while(startForMin <= endForMin){
        mid = startForMin + (endForMin - startForMin)/2;
        if(arr[mid] == k){
            minIndex = mid;
            flag = 1;
            endForMin = mid - 1;
        }
        else if(arr[mid] < k){
            startForMin = mid + 1;
        }
        else{
            endForMin = mid - 1;
        }
    }

    while(startForMax <= endForMax){
        mid = startForMax + (endForMax - startForMax)/2;
        if(arr[mid] == k){
            maxIndex = mid;
            startForMax = mid + 1;
        }
        else if(arr[mid] < k){
            startForMax = mid + 1;
        }
        else{
            endForMax = mid - 1;
        }
    }
    if(flag == 0) return {-1, -1};
    else return {minIndex,maxIndex};
}
int main(){
    vector<int> A = {0, 0, 1, 1, 2, 2, 2, 2};
    pair<int, int> ans = firstAndLastPosition(A, 8 , 8);
    cout << ans.first << " " << ans.second;
}