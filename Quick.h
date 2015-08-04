#ifndef __QUICK_H__
#define __QUICK_H__

#include "sort.h"

class Quick : public Sort {
  public:
    Quick();
    double sort();
    void swap(int first_index, int second_index);
    void quickSort(int first_index, int last_index);
    int pivot(int first_index, int last_index);
};


#endif
