#include "Sort.h"

#include <iostream>

using namespace std;

Sort::Sort() {
  random_list = new list<int>;
  number_of_items = 0;
}

void Sort::generateRandomList(int n) {
  number_of_items = n;
  srand(time(NULL));
  for(int i = 0; i < n; i++) {
    random_list->push_front(rand() % 1000);
  }
}

void Sort::clearRandomList() {
  random_list->clear();
}

void Sort::printList() {
  list<int>::iterator iterator = random_list->begin();
  for(; iterator != random_list->end(); iterator++) { cout << *iterator << endl; }
}

double Sort::sort() {
  return 0.0;
}
