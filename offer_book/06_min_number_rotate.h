//
// Created by 刘国峰 on 2018/7/23.
//

#ifndef OFFER_06_MIN_NUMBER_ROTATE_H
#define OFFER_06_MIN_NUMBER_ROTATE_H

#include <iostream>
#include <vector>

class Solution {
public:
    int minNumberInRotateArray(std::vector<int> rotateArray) {
        if (rotateArray.size() > 0) {
            size_t left = 0, right = rotateArray.size() - 1;
            size_t mid = left;
            while (rotateArray[left] >= rotateArray[right]) {
                if (right - left == 1) {
                    mid = right;
                    break;
                }

                mid = (right + left) / 2;
                if ( rotateArray[right] == rotateArray[mid] && rotateArray[right] == rotateArray[left] ) {
                    return *std::min_element(rotateArray.begin(), rotateArray.end());
                }
                else if (rotateArray[left] <= rotateArray[mid]) {
                    left = mid;
                } else if (rotateArray[right] >= rotateArray[mid]) {
                    right = mid;
                }
            }
            return rotateArray[mid];

        }
        return 0;
    }
};

#endif //OFFER_06_MIN_NUMBER_ROTATE_H
