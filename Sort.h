#ifndef __SORT_H__
#define __SORT_H__
#include <chrono>
#include <ctime>
#include <list>
#include <random>

using namespace std;
using namespace std::chrono;

class Sort {
  public:
    int number_of_items;
    list<int> *random_list;
    Sort();
    virtual double sort();
    void generateRandomList(int n);
    int getElement(int index);
};

#endif
