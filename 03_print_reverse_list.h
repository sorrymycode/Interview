//
// Created by 刘国峰 on 2018/7/22.
//

#ifndef OFFER_03_PRINT_REVERSE_LIST_H
#define OFFER_03_PRINT_REVERSE_LIST_H

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> array;

    void traver_link(ListNode* head, std::vector<int>& arr) {
        if (head != nullptr) {
            traver_link(head->next, arr);
            arr.push_back(head->val);
        }
    }
    std::vector<int> printListFromTailToHead(ListNode* head) {
        array.clear();
        if (head != nullptr) {
            traver_link(head, array);
        }
        return array;
    }
};

#endif //OFFER_03_PRINT_REVERSE_LIST_H
