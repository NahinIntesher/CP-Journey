#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& first, vector<int>& second) {
    vector<int> arr;
    int index1 = 0;
    int index2 = 0;
    double result;
    int len1 = first.size();
    int len2 = second.size();

    while(index1<len1 && index2<len2){
        if(first[index1] < second[index2]){
            arr.push_back(first[index1++]);
        }
        else{
            arr.push_back(second[index2++]);
        }
    }
    while (index1 < len1){
        arr.push_back(first[index1++]);
    }
    while (index2 < len2){
        arr.push_back(second[index2++]);
    }

    int arrSize = arr.size();
    if(arrSize%2==0){
        int index = (arrSize/2)-1;
        result = double(arr[index] + arr[index+1]);
        result = result/2;        
    }
    else{
        int index = (arrSize/2);
        result = double(arr[index]);
    }
    return result;
}

int main(){
    vector<int> first = {1,3};
    vector<int> second = {2};
    cout << findMedianSortedArrays(first, second);
}