#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <cmath>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  //write your code here
  if (mSize == 0) return -1;

  int height = floor(log(mSize) / log(2));
  int amountNode = (1 - pow(2, height+1)) / (1-2);
  if (mSize > amountNode) height++;
  return height;
}

#endif

