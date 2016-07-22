//
// Created by hy on 16-7-22.
// 该代码完成字符串的全排列

#include <iostream>
using namespace std;


void CalcAllPermutation(string perm, int from, int to) {
//void CalcAllPermutation(char* perm, int from, int to) {
    if (to <= 1) {
        return;
    }
    if (from == to) {
        for (int i = 0; i <= to; i++) {
            cout << perm[i];
        }
        cout << endl;
    }
    else {
        for (int j = from; j <= to; j++) {
            swap(perm[j], perm[from]);
            CalcAllPermutation(perm, from + 1, to);
            swap(perm[j], perm[from]);
        }
    }
}


int main(void){
//    char* abc = "abc";
    string abc = "abc";
    CalcAllPermutation(abc, 0, 2);
}
