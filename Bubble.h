#ifndef __BUBBLE_H__
#define __BUBBLE_H__
#include "sort.h"

class Bubble : public Sort {
  public:
    Bubble();
    double sort();
    void swap(int index);
};

#endif
