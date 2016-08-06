//
// Created by hy on 16-8-6.
//


#include <iostream>
using namespace std;


// 判断数字是奇数还是偶数
bool IsOddNumber(int data) {
    return (data & 1) == 1;
}

//奇数和偶数互换
int* OddEvenSort(int *pData, unsigned int length) {
//void OddEvenSort(int *pData, unsigned int length) {
    if (pData == NULL || length == 0) {
        return pData;
//        return ;
    }

    int *pBegin = pData;
    int *pEnd = pData + length - 1;

    while (pBegin < pEnd) {
//        如果pBegin 指向的是奇数，正常，向右移
        if (IsOddNumber(*pBegin)) {
            pBegin++;
        }
            //如果pEnd指向的是偶数，正常，向前移
        else if (!IsOddNumber(*pEnd)) {
            pEnd--;
        }
            //否则不正常，交换
        else {
            swap(*pBegin, *pEnd);
        }
    }
//    return;
    return pData;
}


int main(int){
    int a[] = {2,8,7,1,3,5,6,4};
    unsigned int aLength = 8;
    int *b = OddEvenSort(a, aLength);
//    cout << *b << endl;
    int i = 0;
    while(i <= aLength-1){
        cout << *b << endl;
        b++;
        i++;
    }
}

