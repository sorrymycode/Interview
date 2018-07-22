//
// Created by 刘国峰 on 2018/7/22.
//

#ifndef OFFER_05_STACK_TO_QUEUE_H
#define OFFER_05_STACK_TO_QUEUE_H

#include <iostream>
#include <stack>


class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        if (!stack2.empty()) {
            int tmp = stack2.top();
            stack2.pop();
            return tmp;
        } else {
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
            int tmp = stack2.top();
            stack2.pop();
            return tmp;
        }
    }

private:
    std::stack<int> stack1;
    std::stack<int> stack2;
};


#endif //OFFER_05_STACK_TO_QUEUE_H
