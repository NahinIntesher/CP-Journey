#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void heapify(vector<int> &arr, int size, int index){
        int largest = index;
        int left = 2 * index + 1; // 0 Based indexing
        int right = 2 * index + 2; // 0 Based indexing
        
        // Swaping with max child
        if(left < size && arr[largest] < arr[left])
            largest = left;
        if(right < size && arr[largest] < arr[right])
            largest = right;
        
        if(largest != index){
            swap(arr[index] , arr[largest]);
            heapify(arr, size, largest);
        }
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        
        // Merge both array into one
        vector<int> ans;
        for(auto i: a)
            ans.push_back(i);
        for(auto i: b)
            ans.push_back(i);
        
        // Make the array to a heap
        int size = ans.size();
        for(int i = size/2-1; i >= 0; i--){ // 0 Based indexing
            heapify(ans, size, i);
        }
        return ans;
    }
};