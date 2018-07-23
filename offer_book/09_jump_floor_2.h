//
// Created by 刘国峰 on 2018/7/23.
//

#ifndef OFFER_09_JUMP_FLOOR_2_H
#define OFFER_09_JUMP_FLOOR_2_H

#include <cmath>

class Solution {
public:
    int jumpFloorII(int number) {
        if (number == 1) {
            return 1;
        } else if (number == 2) {
            return 2;
        } else {
            return (int)pow(2., number-1);
        }

    }
};

#endif //OFFER_09_JUMP_FLOOR_2_H
