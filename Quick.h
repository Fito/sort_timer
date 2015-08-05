#ifndef __QUICK_H__
#define __QUICK_H__
#include "Sort.h"

class Quick : public Sort {
  public:
    Quick();
    double sort();
  private:
    int getElement(int index);
    void quickSort(int first_index, int last_index);
    void swap(int first_index, int second_index);
    int pivot(int first_index, int last_index);
};


#endif
