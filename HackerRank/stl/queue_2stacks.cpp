#include<iostream>
#include<stack>
using namespace std;

class MyQueue {
  
    public:
        stack<int> stack_newest_on_top, stack_oldest_on_top;   
        void push(int x) 
        {
            stack_newest_on_top.push(x);       
        }

        void pop() 
        {
		    int x;
            if(stack_oldest_on_top.size()==0)
            {
                while(!stack_newest_on_top.empty())
		        {
			        x=stack_newest_on_top.top();
			        stack_newest_on_top.pop();
			        stack_oldest_on_top.push(x);
		        }
            }
            stack_oldest_on_top.pop();
        }

        int front() 
        {
        	int x;
            if(stack_oldest_on_top.size()==0)
            {
                while(!stack_newest_on_top.empty())
		        {
			        x=stack_newest_on_top.top();
			        stack_newest_on_top.pop();
			        stack_oldest_on_top.push(x);
		        }
            }
		    return stack_oldest_on_top.top();
        }
};

int main() {
    MyQueue q1;
    int q, type, x;
    cin >> q;
    
    for(int i = 0; i < q; i++) {
        cin >> type;
        if(type == 1) {
            cin >> x;
            q1.push(x);
        }
        else if(type == 2) {
            q1.pop();
        }
        else 
            cout <<"top: "<< q1.front() << endl;
    }
    return 0;
}

