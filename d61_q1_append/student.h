#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        T *tmp = new T[this->size() + s.size()];
        for (int i = 0; i < s.size(); i++) {
            tmp[i] = s.mData[i];
        }
        for (int i = 0; i < this->size(); i++) {
            tmp[i+s.size()] = this->mData[i];
        }
        delete [] mData;
        mData = tmp;
        mCap = this->size() + s.size();
        mSize = this->size() + s.size();
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        T *tmp = new T[this->size() + q.size()];
        for (int i = 0; i < q.size(); i++) {
            tmp[i] = q.mData[(q.size()-1)-i];
        }
        for (int i = 0; i < this->size(); i++) {
            tmp[i+q.size()] = this->mData[i];
        }
        delete [] mData;
        mData = tmp;
        mCap = this->size() + q.size();
        mSize = this->size() + q.size();
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        for (int i = s.size()-1; i>= 0; i--) {
            this->push(s.mData[i]);
        }
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        for (int i = 0; i < q.size(); i++) {
            this->push(q.mData[i]);
        }
    }
}
