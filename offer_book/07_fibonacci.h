//
// Created by 刘国峰 on 2018/7/23.
//

#ifndef OFFER_07_FIBONACCI_H
#define OFFER_07_FIBONACCI_H

#include <iostream>
#include <vector>

class Solution {
public:
    int Fibonacci(int n) {
        if ( n <= 2) {
            if (n == 0) {
                return 0;
            }
            return 1;
        }

        std::vector<int> mem(n+1, 0);
        mem[1] = 1;
        for (int i=2; i<=n; ++i) {
            mem[i] = mem[i-1] + mem[i-2];
        }
        return mem[n];
    }
};

#endif //OFFER_07_FIBONACCI_H
