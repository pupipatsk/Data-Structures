#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    //write your code here
    size_t revA = this->mCap - this->mSize;
    size_t revB = other.mCap - other.mSize;
    if (revA < revB) return -1;
    else if (revA == revB) return 0;
    else if (revA > revB) return 1;
}

#endif
