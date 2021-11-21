// https://leetcode.com/problems/min-stack

class MinStack {
public:
    int stk[100000];
    int min1[100000];
    int i;int j;
    /** initialize your data structure here. */
    MinStack() {
        i=-1;
        j=-1;
    }
    
    void push(int val) {
        stk[++i]=val;
        if(j==-1)
        {
            min1[++j]=val;
        }
        if(val<=min1[j])
            min1[++j]=val;
        
    }
    
    void pop() {
        if((min1[j]==stk[i])&&(j!=-1))
        {
            j--;
        }
        i--;
        
    }
    
    int top() {
        return stk[i];
        
    }
    
    int getMin() {
        if(j!=-1)
        return min1[j];
        else
            return 0;
        
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