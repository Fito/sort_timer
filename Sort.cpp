#include "sort.h"

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

int Sort::getElement(int index) {
  list<int>::const_iterator iterator = random_list->begin();

  for(int i = 0; i < index; i++) {
    iterator++;
  }

  return *iterator;
}

double Sort::sort() {
  return 0.0;
}
