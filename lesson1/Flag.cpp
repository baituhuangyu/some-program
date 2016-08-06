//
// Created by hy on 16-8-6.
//荷兰国旗

#include <iostream>

using namespace std;

//int end = 10;
int *Flag(int *array, int length) {
    int begin = 0;
    int current = 0;
    int end = length - 1;

    while (current <= end) {
        if (array[current] == 0) {
            swap(array[current], array[begin]);
            current++;
            begin++;
        }
        else if (array[current] == 1) {
            current++;
        }
        else {
            swap(array[current], array[end]);
            end--;
        }
    }
    return array;
}

int main(int) {
    int flagArray[] = {2, 0, 1, 0, 0, 1, 2, 1, 0, 1, 1, 2};
    int aLength = 12;

    int *b = Flag(flagArray, aLength);
    int i = 0;
    while (i <= aLength - 1) {
        cout << *b << endl;
        b++;
        i++;
    }
}

