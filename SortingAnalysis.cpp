#include "bubble.h"
#include "quick.h"
#include "radix.h"
#include <iostream>

using namespace std;

void analyze_sorting(Sort *sortObject);

int main() {
  Bubble *bubble_sort = new Bubble();
  Quick *quick_sort = new Quick();
  Radix *radix_sort = new Radix();

  cout << "------- Bubble Sort -----------" << endl;
  // bubble_sort->generateRandomList(5);
  // cout << "Unsorted: " << endl;
  // bubble_sort->printList();
  // bubble_sort->sort();
  // cout << "sorted: " << endl;
  // bubble_sort->printList();

  analyze_sorting(bubble_sort);

  cout << "------- Quick Sort -----------" << endl;
  // quick_sort->generateRandomList(5);
  // cout << "Unsorted: " << endl;
  // quick_sort->printList();
  // cout << "Sorted: " << endl;
  // quick_sort->sort();
  // quick_sort->printList();

  analyze_sorting(quick_sort);

  cout << "------- Radix Sort -----------" << endl;
  // radix_sort->generateRandomList(5);
  // cout << "Unsorted: " << endl;
  // radix_sort->printList();
  // cout << "Sorted: " << endl;
  // radix_sort->sort();
  // radix_sort->printList();

  analyze_sorting(radix_sort);
}

void analyze_sorting(Sort *sortObject) {
  double min = 1.0, max = 0.0, total = 0.0;
  int n = 0, increment = 100;

  cout << "n:" << "\tmin:" << "\tmax:" << "\tavg:" << endl;
  for(int i = 0; i < 20; i++) {
    n += increment;
    for(int j = 0; j < 50; j++) {
      sortObject->generateRandomList(n);
      double sorting_time = sortObject->sort();
      min = sorting_time < min ? sorting_time : min;
      max = sorting_time > max ? sorting_time : max;
      total += sorting_time;

      cout.precision(7);
      sortObject->clearRandomList();
    }
    cout << fixed << n;
    cout << "\t" << fixed << min;
    cout << "\t" << fixed << max;
    cout << "\t" << fixed << (total / 50) << endl;
    min = 100.0, max = 0.0, total = 0.0;
  }

}
