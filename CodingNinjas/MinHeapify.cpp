#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int n, int i){
    int smallest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    
    if(left < n && arr[smallest] > arr[left]){
        smallest = left;
    }
    if(right < n && arr[smallest] > arr[right]){
        smallest = right;
    }

    if(smallest != i){
        swap(arr[i] , arr[smallest]);
        heapify(arr, n, smallest);
    }
    
}

vector<int> buildMinHeap(vector<int> &arr)
{
    int n = arr.size();
    for(int i = n/2 - 1; i >= 0; i--){
        heapify(arr, n, i);
    }
    return arr;
}

int main(){
    vector<int> A = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for(int i = n/2; i >= 1; i--){
        heapify(A, n, i);
    }
    cout << "-> Elements After max heapifying: A = {-1, 54, 53, 55, 52, 50}" << endl;
    for(int i = 1; i <= n; i++){
        cout << A[i] << " ";
    }

}