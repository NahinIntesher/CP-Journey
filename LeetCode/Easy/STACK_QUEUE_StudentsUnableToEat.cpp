#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        stack<int> st;
        for(int i = 0; i < students.size(); i++){
            q.push(students[i]);
        }
        for(int i = sandwiches.size() - 1; i >= 0 ; i--){
            st.push(sandwiches[i]);
        }
        int count = 0;
        while(!st.empty()){
            if(st.top() == q.front()){
                st.pop();
                q.pop();
                count = 0;
            }
            else{
                q.push(q.front());
                q.pop();
                count++;
            }

            if(q.size() == count){
                break;
            }
        }
        return q.size();
    }
};