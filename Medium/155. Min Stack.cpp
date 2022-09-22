https://leetcode.com/problems/min-stack/
class MinStack {
public:
    vector <int> arr;
    vector <int> arrmin;
    MinStack() {
              
        
    }
    
    void push(int val) {
        arr.push_back(val);
        if(arrmin.empty() || val <= arrmin.back())
        {
            arrmin.push_back(val);
        }
        else
        {
            arrmin.push_back(arrmin.back());
        }
    }
    
    void pop() {
        arr.pop_back();
        arrmin.pop_back();
        
        
    }
    
    int top() {
        return arr.back();
        
    }
    
    int getMin() {
        return arrmin.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */