//
// Created by hy on 16-7-25.
//
//最长回文字串


#include <stdio.h>
#include <memory.h>

void Manacher(char *s, int *p) {
//int Manacher(char *s, int *p) {
    int size = strlen(s);
    p[0] = 1;
    int id = 0;
    int mx = 0;
    int i;
    for (i = 0; i < size; ++i) {
        if (mx > i) {
            p[i] = min(p[2 * id - i], mx - i);
        }
        else {
            p[i] = 1;
        }
        while (s[i + p[i]] == s[i - p[i]]) {
            p[i]++;
        }
        if (p[i] + i > mx) {
            mx = p[i] + i;
            id = i;
        }
    }
    int j;
    for ( j = 0; j < sizeof(p); ++j) {
        printf("%d", p[j]);
    }


//    return p - sizeof(p);
//    return p;
}


int min(int a, int b) {
    return a >= b ? a : b;
}


void main(void) {
    char *a_s = "12212321";
    char *m_s = "$#1#2#2#1#2#3#2#1#";

//    *m_s = '$';
//    ++m_s;
//    int j;
//    printf("%d", strlen(a_s));
//    for (j = 0; j < strlen(a_s); ++j) {
//        *(m_s + j) = *(a_s + j);
//        *(m_s + j + 1) = '#';
//    }

    int *p[16];
    Manacher(m_s, p);
}