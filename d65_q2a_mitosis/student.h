#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b) {
    T *newArr = new T[mSize + (b-a+1)];
    int idxA = (mSize-1) - a; // mSize-1 = last index
    int idxB = (mSize-1) - b; // a < b -> idxB < idxA
    int count = 0;
    for (int i = 0; i < mSize; i++) {
        if (i < idxB) {
            newArr[i] = mData[i];
        }
        else if (idxB <= i && i <= idxA) {
            newArr[i+count] = mData[i];
            count++;
            newArr[i+count] = mData[i];
        } else if (i > idxA) {
            newArr[i+count] = mData[i];
        }
    }
    delete [] mData;
    mData = newArr;
    mCap = mSize + (b-a+1);
    mSize = mSize + (b-a+1);
}

#endif