//
// Created by hy on 16-7-24.
//

# include<stdio.h>
#include <ctype.h>

int StrToInt(const char *str) {
    static const int MAX_INX = (int) ((unsigned) ~0 >> 1);
    static const int MIN_INX = (int) ((unsigned) ~0 >> 1) - 1;
    unsigned int n = 0;

    // 判断输入是否为空
    if (str == 0) {
        return 0;
    }

    // 处理空格
    while (isspace(*str)) {
        ++str;
    }

    // 处理正负
    int sign = 1;
    if (*str == '+' || *str == '-') {
        if (*str == '-') {
            sign = -1;
        }
        ++str;
    }

    // 确定是数字之后才执行循环
    while (isdigit((*str))) {
        // 处理溢出
        int c = *str - '0';
        if (sign == 1 && ((n > MAX_INX / 10) || ((n == MAX_INX / 10) && (c > MAX_INX % 10)))) {
            n = MAX_INX;
            break;
        }
        else if (sign < 0 && ((n > (unsigned) MIN_INX / 10) ||
                              ((n == (unsigned) MIN_INX / 10) && (c > (unsigned) MAX_INX % 10)))) {
            n = MIN_INX;
            break;
        }

        // 把之前的数字乘以10,加上当前数字
        n = n * 10 + c;
        ++str;
    }

    return sign > 0 ? n : -n;
}

void main(void) {
    int ccc = 0;
    const char *aStr = "12345";
//    const char *aStr = "214748369";
//    const char *aStr = "214748364";

//    const char *aStr = "2147483648";
//    const char *aStr = "-2147483648";
//    const char *aStr = "+2147483648";


    ccc = StrToInt(aStr);
    printf("%d", ccc);
}