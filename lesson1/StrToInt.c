//
// Created by hy on 16-7-24.
//

# include<stdio.h>

int StrToInt(const char *str){
    int n = 0;
    while (*str != 0){
        int c = *str  - '0';
        n = n * 10 + c;
        ++str;
    }
    return n;
}

void main(void){
    int ccc=0;
    const char *aStr = "12345";

    ccc = StrToInt(aStr);
    printf("%d", ccc);
}