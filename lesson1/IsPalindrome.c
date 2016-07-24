//
// Created by hy on 16-7-24.
// 判断是否为回文


#include <stdbool.h>
//#include <lzma.h>
#include <stdio.h>

bool IsPanlindrome(const char *s, int n){
    // 非法输入
    if(s == NULL || n<1){
        return false;
    }
    const char *front, *back;

    //初始化头指针和尾指针
    front = s;
    back = s+n-1;

    while (front < back){
        if(*front != *back){
            return false;
        }

        ++front;
        ++back;
    }
    return true;
}

void main(void){
    bool is;
    is = IsPanlindrome("abccba", 6);
    printf("%d", is);
}
