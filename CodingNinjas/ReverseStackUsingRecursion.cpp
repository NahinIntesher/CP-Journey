void solve(stack<int> &stack, int num){
    if(stack.empty()) {
        stack.push(num);
        return;
    }

    int temp = stack.top();
    stack.pop();
    solve(stack, num);
    stack.push(temp);
}

void reverseStack(stack<int> &stack) {
    if(stack.empty()) {
        return;
    }

    int num = stack.top();
    stack.pop();
    reverseStack(stack);
    solve(stack, num);
}