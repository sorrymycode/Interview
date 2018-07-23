//
// Created by 刘国峰 on 2018/7/23.
//

#ifndef OFFER_10_RECT_COVER_H
#define OFFER_10_RECT_COVER_H

#include <iostream>
#include <vector>

class Solution {
public:
    int rectCover(int number) {
        if (number == 0) {
            return 0;
        }
        std::vector<int> mem(number+1, 1);
        for (int i=2; i<=number; ++i) {
            mem[i] = mem[i-1] + mem[i-2];
        }
        return mem[number];
    }
};

#endif //OFFER_10_RECT_COVER_H
