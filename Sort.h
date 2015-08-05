/*
 * CSC340 Programming Methodology: In Class Exercise - Sorting Time
 * Authors: Anthony Portelli & Adolfo von Zastrow
 * File: Sort.h
 * Created on August 4, 2015
 */

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
    virtual double sort();
    void generateRandomList(int n);
    void clearRandomList();
    void printList();
  protected:
    int number_of_items;
    list<int> *random_list;
    Sort();
};

#endif
