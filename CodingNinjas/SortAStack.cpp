#include <bits/stdc++.h> 

void sortedInsert(stack<int> &stack, int num){
	if(stack.empty() || (!stack.empty() && stack.top() < num)){
		stack.push(num);
		return;
	}
	int temp = stack.top();
	stack.pop();

	sortedInsert(stack, num);

	stack.push(temp);
}

void sortStack(stack<int> &stack){
	if(stack.empty()){
		return;
	}
	int num = stack.top();
	stack.pop();

	sortStack(stack);

	sortedInsert(stack, num);
}