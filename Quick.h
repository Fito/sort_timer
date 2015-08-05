#ifndef __QUICK_H__
#define __QUICK_H__
#include "Sort.h"

class Quick : public Sort {
  public:
    Quick();
    double sort();
  private:
    void quickSort(int first_index, int last_index);
    int pivot(int first_index, int last_index);
};


#endif
