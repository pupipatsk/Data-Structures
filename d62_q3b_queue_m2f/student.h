#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    CP::queue<T> output, tmp;
    for (int i = 0; i <= pos; i++) {
        if (i == pos) {
            output.push(this->front());
            this->pop();
            break;
        }
        tmp.push(this->front());
        this->pop();
    }
    while (!tmp.empty())
    {
        output.push(tmp.front());
        tmp.pop();
    }
    while (!this->empty())
    {
        output.push(this->front());
        this->pop();
    }
    *this = output;
}

#endif
