#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6};
    auto it = v.begin();
    while (it != v.end()){
        cout << *it << " ";
        it++;
    }
    for(auto i: v){
        cout << i << " ";
    }

    vector<pair<int, int> > v_p = {{1,2}, {3,4}, {5,6}, {7,8}};
    
    for (auto it = v_p.begin(); it != v_p.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
    
    or,
    for (auto it = v_p.begin(); it != v_p.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    or, 
    for(auto i: v_p){
        cout << i.first << " " << i.second << endl;
    }


    vector<int> v = {1, 2, 3, 4, 5, 6};
    for(auto a: v){ // always use reference to take input like this (auto &a: v)
        cin >> a;
    }
    // If we dont use reference then input taking vector will be finished after taking inputs

    for(auto a: v){ 
        // though we took input again 10 20 30 40 50 60 but
        // this loop will print 1 2 3 4 5 6 
        cout << a << " ";
    }









}