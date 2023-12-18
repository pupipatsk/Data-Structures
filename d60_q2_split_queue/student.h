#ifndef _CP_STUDENT_QUEUE_INCLUDED_
#define _CP_STUDENT_QUEUE_INCLUDED_

#include <stdexcept>
#include <iostream>
//#pragma once
#include <vector>
#include <queue>
#include "queue.h"

template <typename T>
std::vector< CP::queue<T> > CP::queue<T>::split_queue(int k) {
    // code here
    std::vector<CP::queue<T> > qs(k);
    CP::queue<T> copyQueue(*this);
    int idx = 0;
    for (int i = mFront; i < mFront+mSize; i++) {
        qs[idx++ % k].push(copyQueue.front());
        copyQueue.pop();
    }
    *this = copyQueue;
    return qs;
}

#endif