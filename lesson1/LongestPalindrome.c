//
// Created by hy on 16-7-25.
// 求最长回文字串

#include <stdio.h>

int LongestPalindrome(const char *s, int n){
    int i, j, max, c;

    if(s==0 || n < 1){
        return 0;
    }

    max = 0;

    // i为回文字串的中心
    for (i = 0; i < n; ++i ){
        // 回文字串为奇数
        for (j = 0; (i-j) >=0 && (i + j < n); ++j){
            if (s[i - j] != s[i + j]){
                break;
            }
            // 加上i这个对称点
            c = j*2+1;
        }
        if (c > max){
            max = c;
        }

        // 回文为偶数
        for (j = 0; (i - j >= 0) && (i + j + 1 < n);++j){
            if (s[i - j] != s[i + j + 1]){
                break;
            }
            // 加上i 以及 与i 对称的点
            c = j * 2 + 2;
        }
        if (c > max){
            max = c;
        }
    }

    return max;
}


void main(void){

    printf("%d", LongestPalindrome("asdfghjkllkjhgfdsa", 17));
    printf("\n");
    printf("%d", LongestPalindrome("asdfghjklkjhgfdsa", 16));
}


