//
// Created by 刘国峰 on 2018/7/20.
//

#ifndef OFFER_04_REBUILD_BINARY_TREE_H
#define OFFER_04_REBUILD_BINARY_TREE_H

#include <iostream>
#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 };

class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
        if (pre.size() == vin.size() && pre.size() != 0) {
            return recursion_build(pre, vin, 0, pre.size()-1, 0, vin.size()-1);
        }
        return nullptr;

    }
private:
    TreeNode* recursion_build(const std::vector<int>& pre, const std::vector<int>& vin, size_t pre_left, size_t pre_right, size_t vin_left, size_t vin_right) {
        TreeNode* root = new TreeNode(pre[pre_left]);
        size_t mid_pos = vin_left;
        while (mid_pos <= vin_right) {
            if (vin[mid_pos] == pre[pre_left]) {
                break;
            }
            ++mid_pos;
        }

        if (mid_pos - vin_left > 0) {
            root->left = recursion_build(pre, vin, pre_left+1, pre_left+mid_pos-vin_left, vin_left, mid_pos-1);
        }
        if (vin_right - mid_pos > 0) {
            root->right = recursion_build(pre, vin, pre_left+1+mid_pos-vin_left, pre_right, mid_pos+1, vin_right);
        }
        return root;
    }
};

#endif //OFFER_04_REBUILD_BINARY_TREE_H
