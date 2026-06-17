stack<int>stack , minstack;
     MinStack() {        
    }
    
    void push(int value) {
        if(minstack.empty() || value <= minstack.top())
        {
            minstack.push(value);
        }

        stack.push(value);
    }
    
    void pop() {
        if(stack.top() == minstack.top())
        {
            minstack.pop();
        }
        stack.pop();
        
    }
    
    int top() {
        return stack.top();
        
    }
    
    int getMin() {
        return minstack.top();