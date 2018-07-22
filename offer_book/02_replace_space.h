//
// Created by 刘国峰 on 2018/7/20.
//

#ifndef OFFER_02_REPLACE_SPACE_H
#define OFFER_02_REPLACE_SPACE_H

class Solution {
public:
    void replaceSpace(char *str,int length) {
        if (str && length > 0) {
            unsigned int count_blank = 0;
            unsigned int origin_length = 0;
            while(str[origin_length] != '\0') {
                if (str[origin_length] == ' ') {
                    ++count_blank;
                }
                ++origin_length;
            }
            unsigned int new_length = origin_length + count_blank * 2;
            if (new_length > length) {
                return;
            }

            while (origin_length >= 0 && new_length > origin_length) {
                if (str[origin_length] != ' ') {
                    str[new_length--] = str[origin_length--];
                } else {
                    str[new_length--] = '0';
                    str[new_length--] = '2';
                    str[new_length--] = '%';
                    --origin_length;
                }
            }
        }
        return;
    }
};

#endif //OFFER_02_REPLACE_SPACE_H
