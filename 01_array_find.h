//
// Created by 刘国峰 on 2018/7/20.
//

#ifndef OFFER_01_ARRAY_FIND_H
#define OFFER_01_ARRAY_FIND_H
#include <iostream>
#include <vector>

class Solution {
public:
    bool Find(int target, std::vector<std::vector<int> > array) {
        if (!array.empty() && !array[0].empty()) {
            int y_begin = 0, x_begin = (int)array[0].size() - 1;
            while (y_begin < array.size() && x_begin >= 0 ) {
                if (array[y_begin][x_begin] < target) {
                    ++y_begin;
                }
                else if (array[y_begin][x_begin] > target) {
                    --x_begin;
                } else {
                    std::cout << y_begin << "  " << x_begin << std::endl;
                    std::cout << array[y_begin][x_begin] << "  " << target << std::endl;
                    return true;
                }
            }
        }
        return false;
    }
};

#endif //OFFER_01_ARRAY_FIND_H
