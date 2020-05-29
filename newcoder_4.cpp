/* 用两个栈来实现一个队列，完成队列的Push和Pop操作。
 队列中的元素为int类型。 
 */

#include <iostream>
#include <stack>
using namespace std;

stack<int> stack1;
stack<int> stack2;

void push(int node)
{
    stack1.push(node);
}

int pop()
{
    int node;
    if (stack2.empty())
    {
        while (!stack1.empty())
        {
            node = stack1.top();
            stack2.push(node);
            stack1.pop();
        }
    }
    node = stack2.top();
    stack2.pop();
    return node;
}

int main()
{
    push(3);
    pop();
    return 0;
}