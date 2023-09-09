class MyQueue 
{
public:
    stack<int> inputStack;
    stack<int> outputStack;

    MyQueue() 
    {
    }

    void push(int x) 
    {
        inputStack.push(x);
    }

    int pop() 
    {
        if (outputStack.empty()) 
        {
            while (!inputStack.empty()) 
            {
                outputStack.push(inputStack.top());
                inputStack.pop();
            }
        }

        if (outputStack.empty()) 
        {
            return -1;
        }

        int front = outputStack.top();
        outputStack.pop();
        return front;
    }

    int peek() 
    {
        if (outputStack.empty()) 
        {
            while (!inputStack.empty()) 
            {
                outputStack.push(inputStack.top());
                inputStack.pop();
            }
        }

        if (outputStack.empty()) 
        {
            return -1;
        }

        return outputStack.top();
    }

    bool empty() 
    {
        return inputStack.empty() && outputStack.empty();
    }
};
